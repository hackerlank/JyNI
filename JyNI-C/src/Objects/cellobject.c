/* This File is based on cellobject.c from CPython 2.7 (latest repository version).
 * It has been modified to suit JyNI needs.
 * Note that this file was generated by JyNIgate and its source is hosted in the
 * JyNIgate project. Modifying this generated file is not recommended.
 *
 *
 * Copyright of JyNI:
 * Copyright (c) 2013, 2014, 2015, 2016 Stefan Richthofer.
 * All rights reserved.
 *
 *
 * Copyright of Python and Jython:
 * Copyright (c) 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009,
 * 2010, 2011, 2012, 2013, 2014, 2015, 2016 Python Software Foundation.
 * All rights reserved.
 *
 *
 * This file is part of JyNI.
 *
 * JyNI is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of
 * the License, or (at your option) any later version.
 *
 * JyNI is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with JyNI.  If not, see <http://www.gnu.org/licenses/>.
 */


/* Cell object implementation */

#include "JyNI.h"

PyObject *
PyCell_New(PyObject *obj)
{
	PyCellObject *op;

	op = (PyCellObject *)PyObject_GC_New(PyCellObject, &PyCell_Type);
	if (op == NULL)
		return NULL;
	op->ob_ref = obj;
	Py_XINCREF(obj);

	_JyNI_GC_TRACK(op);
	return (PyObject *)op;
}

PyObject *
PyCell_Get(PyObject *op)
{
	if (!PyCell_Check(op)) {
		PyErr_BadInternalCall();
		return NULL;
	}
	Py_XINCREF(((PyCellObject*)op)->ob_ref);
	return PyCell_GET(op);
}

int
PyCell_Set(PyObject *op, PyObject *obj)
{
	PyObject* oldobj;
	if (!PyCell_Check(op)) {
		PyErr_BadInternalCall();
		return -1;
	}
	oldobj = PyCell_GET(op);
	Py_XINCREF(obj);
	PyCell_SET(op, obj);
	updateJyGCHeadLink(op, AS_JY_WITH_GC(op), 0,
				obj, obj ? AS_JY(obj) : NULL);
	Py_XDECREF(oldobj);
	JyObject* jy = AS_JY_WITH_GC(op);
	if (JyObject_IS_INITIALIZED(jy))
	{
		env(-1);
		(*env)->SetObjectField(env, jy->jy, pyCell_ob_refField,
					JyNI_JythonPyObject_FromPyObject(obj));
	}
	return 0;
}

static void
cell_dealloc(PyCellObject *op)
{
	_JyNI_GC_UNTRACK(op);
	Py_XDECREF(op->ob_ref);
	PyObject_GC_Del(op);
}

static int
cell_compare(PyCellObject *a, PyCellObject *b)
{
	/* Py3K warning for comparisons  */
	if (PyErr_WarnPy3k("cell comparisons not supported in 3.x",
					   1) < 0) {
		return -2;
	}

	if (a->ob_ref == NULL) {
		if (b->ob_ref == NULL)
			return 0;
		return -1;
	} else if (b->ob_ref == NULL)
		return 1;
	return PyObject_Compare(a->ob_ref, b->ob_ref);
}

static PyObject *
cell_repr(PyCellObject *op)
{
	if (op->ob_ref == NULL)
		return PyString_FromFormat("<cell at %p: empty>", op);

	return PyString_FromFormat("<cell at %p: %.80s object at %p>",
							   op, op->ob_ref->ob_type->tp_name,
							   op->ob_ref);
}

static int
cell_traverse(PyCellObject *op, visitproc visit, void *arg)
{
	Py_VISIT(op->ob_ref);
	return 0;
}

static int
cell_clear(PyCellObject *op)
{
	Py_CLEAR(op->ob_ref);
	return 0;
}

static PyObject *
cell_get_contents(PyCellObject *op, void *closure)
{
	if (op->ob_ref == NULL)
	{
		PyErr_SetString(PyExc_ValueError, "Cell is empty");
		return NULL;
	}
	Py_INCREF(op->ob_ref);
	return op->ob_ref;
}

static PyGetSetDef cell_getsetlist[] = {
	{"cell_contents", (getter)cell_get_contents, NULL},
	{NULL} /* sentinel */
};

PyTypeObject PyCell_Type = {
	PyVarObject_HEAD_INIT(&PyType_Type, 0)
	"cell",
	sizeof(PyCellObject),
	0,
	(destructor)cell_dealloc,               /* tp_dealloc */
	0,                                      /* tp_print */
	0,                                          /* tp_getattr */
	0,                                          /* tp_setattr */
	(cmpfunc)cell_compare,                      /* tp_compare */
	(reprfunc)cell_repr,                        /* tp_repr */
	0,                                          /* tp_as_number */
	0,                                          /* tp_as_sequence */
	0,                                          /* tp_as_mapping */
	0,                                          /* tp_hash */
	0,                                          /* tp_call */
	0,                                          /* tp_str */
	PyObject_GenericGetAttr,                    /* tp_getattro */
	0,                                          /* tp_setattro */
	0,                                          /* tp_as_buffer */
	Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HAVE_GC,/* tp_flags */
	0,                                          /* tp_doc */
	(traverseproc)cell_traverse,                /* tp_traverse */
	(inquiry)cell_clear,                        /* tp_clear */
	0,                                          /* tp_richcompare */
	0,                                          /* tp_weaklistoffset */
	0,                                          /* tp_iter */
	0,                                          /* tp_iternext */
	0,                                          /* tp_methods */
	0,                                          /* tp_members */
	cell_getsetlist,                            /* tp_getset */
};

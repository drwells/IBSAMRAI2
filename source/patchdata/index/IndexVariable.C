//
// File:	$URL: file:///usr/casc/samrai/repository/SAMRAI/tags/v-2-4-4/source/patchdata/index/IndexVariable.C $
// Package:	SAMRAI patch data
// Copyright:	(c) 1997-2008 Lawrence Livermore National Security, LLC
// Release:	0.1
// Revision:	$LastChangedRevision: 2272 $
// Modified:	$LastChangedDate: 2008-07-07 10:38:57 -0700 (Mon, 07 Jul 2008) $
// Description:	hier::Variable class for defining irregular index variables
//

#ifndef included_pdat_IndexVariable_C
#define included_pdat_IndexVariable_C

#include "IndexVariable.h"
#include "IndexDataFactory.h"

#include "tbox/Utilities.h"

#ifndef NULL
#define NULL (0)
#endif

namespace SAMRAI {
    namespace pdat {

/*
*************************************************************************
*									*
* Constructor and destructor for irregular index variable objects	*
*									*
*************************************************************************
*/

template<int DIM, class TYPE, class BOX_GEOMETRY>
IndexVariable<DIM,TYPE,BOX_GEOMETRY>::IndexVariable(const std::string &name) 
:  hier::Variable<DIM>(name, new IndexDataFactory<DIM,TYPE,BOX_GEOMETRY>(hier::IntVector<DIM>(0))) 
                                                        // default zero ghost cells
{
}

template<int DIM, class TYPE, class BOX_GEOMETRY>
IndexVariable<DIM,TYPE,BOX_GEOMETRY>::~IndexVariable()
{
}

}
}
#endif

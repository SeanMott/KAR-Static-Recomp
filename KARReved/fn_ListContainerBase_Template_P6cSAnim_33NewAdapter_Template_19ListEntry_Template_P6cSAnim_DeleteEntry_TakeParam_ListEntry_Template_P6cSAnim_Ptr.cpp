//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80465114.hpp"



void fn_ListContainerBase_Template_P6cSAnim_33NewAdapter_Template_19ListEntry_Template_P6cSAnim_DeleteEntry_TakeParam_ListEntry_Template_P6cSAnim_Ptr(PPC::Runtime::GCContext* context)
{
/*804650F0 00461EF0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*804650F4 00461EF4*/ PPC::Runtime::ASM::mflr(context->r0);
/*804650F8 00461EF8*/ PPC::Runtime::ASM::mr(context->r7, context->r5);
/*804650FC 00461EFC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80465100 00461F00*/ PPC::Runtime::ASM::bl(fn_80465114);
/*80465104 00461F04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80465108 00461F08*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8046510C 00461F0C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80465110 00461F10*/ PPC::Runtime::ASM::blr();
}
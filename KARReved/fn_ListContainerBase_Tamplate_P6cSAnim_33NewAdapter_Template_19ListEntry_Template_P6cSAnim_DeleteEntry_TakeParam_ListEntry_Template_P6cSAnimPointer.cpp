//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSLoadContext.hpp"



void fn_ListContainerBase_Tamplate_P6cSAnim_33NewAdapter_Template_19ListEntry_Template_P6cSAnim_DeleteEntry_TakeParam_ListEntry_Template_P6cSAnimPointer(PPC::Runtime::GCContext* context)
{
/*8043FD04 0043CB04*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8043FD08 0043CB08*/ PPC::Runtime::ASM::mflr(context->r0);
/*8043FD0C 0043CB0C*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*8043FD10 0043CB10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8043FD14 0043CB14*/ PPC::Runtime::ASM::bl(OSLoadContext);
/*8043FD18 0043CB18*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8043FD1C 0043CB1C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8043FD20 0043CB20*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8043FD24 0043CB24*/ PPC::Runtime::ASM::blr();
}
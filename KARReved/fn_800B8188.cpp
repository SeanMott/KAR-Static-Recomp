//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8022CB74.hpp"
#include "fn_8022C824.hpp"



void fn_800B8188(PPC::Runtime::GCContext* context)
{
/*800B8188 000B4F88*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800B818C 000B4F8C*/ PPC::Runtime::ASM::mflr(context->r0);
/*800B8190 000B4F90*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800B8194 000B4F94*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800B8198 000B4F98*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800B819C 000B4F9C*/ PPC::Runtime::ASM::bl(fn_8022CB74);
/*800B81A0 000B4FA0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800B81A4 000B4FA4*/ PPC::Runtime::ASM::beq(.L_800B81B4);
/*800B81A8 000B4FA8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800B81AC 000B4FAC*/ PPC::Runtime::ASM::bl(fn_8022C824);
/*800B81B0 000B4FB0*/ PPC::Runtime::ASM::b(.L_800B81B8);
RUNTIME_PPC_JUMP_LABEL(.L_800B81B4, 0x800B81B4) //this is a jump label
/*800B81B4 000B4FB4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800B81B8, 0x800B81B8) //this is a jump label
/*800B81B8 000B4FB8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800B81BC 000B4FBC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800B81C0 000B4FC0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800B81C4 000B4FC4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800B81C8 000B4FC8*/ PPC::Runtime::ASM::blr();
}
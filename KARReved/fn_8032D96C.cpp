//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8032D96C(PPC::Runtime::GCContext* context)
{
/*8032D96C 0032A76C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8032D970 0032A770*/ PPC::Runtime::ASM::mflr(context->r0);
/*8032D974 0032A774*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8032D978 0032A778*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8032D97C 0032A77C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8032D980 0032A780*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8032D984 0032A784*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8032D988 0032A788*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8032D98C 0032A78C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x4, context->r3));
/*8032D990 0032A790*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8032D994 0032A794*/ PPC::Runtime::ASM::beq(.L_8032D99C);
/*8032D998 0032A798*/ PPC::Runtime::ASM::b(.L_8032D9A0);
RUNTIME_PPC_JUMP_LABEL(.L_8032D99C, 0x8032D99C) //this is a jump label
/*8032D99C 0032A79C*/ PPC::Runtime::ASM::li(context->r4, lbl_805DA9E4 @ Get_MemoryOffset_SDA21);
RUNTIME_PPC_JUMP_LABEL(.L_8032D9A0, 0x8032D9A0) //this is a jump label
/*8032D9A0 0032A7A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*8032D9A4 0032A7A4*/ PPC::Runtime::ASM::bl(fn_80391F10);
/* 8032D9A8 0032A7A8  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*8032D9AC 0032A7AC*/ PPC::Runtime::ASM::beq(.L_8032D9B8);
/*8032D9B0 0032A7B0*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8032D9B4 0032A7B4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8032D9B8, 0x8032D9B8) //this is a jump label
/*8032D9B8 0032A7B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8032D9BC 0032A7BC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8032D9C0 0032A7C0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8032D9C4 0032A7C4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8032D9C8 0032A7C8*/ PPC::Runtime::ASM::blr();
}
//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8033EA00.hpp"



void fn_8033E934(PPC::Runtime::GCContext* context)
{
/*8033E934 0033B734*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8033E938 0033B738*/ PPC::Runtime::ASM::mflr(context->r0);
/*8033E93C 0033B73C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8033E940 0033B740*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8033E944 0033B744*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8033E948 0033B748*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8033E94C 0033B74C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8033E950 0033B750*/ PPC::Runtime::ASM::li(context->r3, 0x3088);
/*8033E954 0033B754*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8033E958 0033B758*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8033E95C 0033B75C*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/* 8033E960 0033B760  7C 64 1B 79 */ mr. context->r4 , context->r3
/*8033E964 0033B764*/ PPC::Runtime::ASM::beq(.L_8033E970);
/*8033E968 0033B768*/ PPC::Runtime::ASM::bl(fn_8033EA00);
/*8033E96C 0033B76C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8033E970, 0x8033E970) //this is a jump label
/*8033E970 0033B770*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8033E974 0033B774*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8033E978 0033B778*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8033E97C 0033B77C*/ PPC::Runtime::ASM::cmplw(context->r3, context->r4);
/*8033E980 0033B780*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8033E984 0033B784*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8033E988 0033B788*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8033E98C 0033B78C*/ PPC::Runtime::ASM::beq(.L_8033E9A8);
/*8033E990 0033B790*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8033E994 0033B794*/ PPC::Runtime::ASM::beq(.L_8033E9A0);
/*8033E998 0033B798*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD944 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033E99C 0033B79C*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8033E9A0, 0x8033E9A0) //this is a jump label
/*8033E9A0 0033B7A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8033E9A4 0033B7A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8033E9A8, 0x8033E9A8) //this is a jump label
/*8033E9A8 0033B7A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8033E9AC 0033B7AC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8033E9B0 0033B7B0*/ PPC::Runtime::ASM::beq(.L_8033E9C0);
/*8033E9B4 0033B7B4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8033E9B8 0033B7B8*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD944 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033E9BC 0033B7BC*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8033E9C0, 0x8033E9C0) //this is a jump label
/*8033E9C0 0033B7C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8033E9C4 0033B7C4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8033E9C8 0033B7C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8033E9CC 0033B7CC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8033E9D0 0033B7D0*/ PPC::Runtime::ASM::b(.L_8033E9DC);
/*8033E9D4 0033B7D4*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD944 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033E9D8 0033B7D8*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8033E9DC, 0x8033E9DC) //this is a jump label
/*8033E9DC 0033B7DC*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xc);
/*8033E9E0 0033B7E0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8033E9E4 0033B7E4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8033E9E8 0033B7E8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8033E9EC 0033B7EC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8033E9F0 0033B7F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8033E9F4 0033B7F4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8033E9F8 0033B7F8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8033E9FC 0033B7FC*/ PPC::Runtime::ASM::blr();
}
//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_SListPrepend.hpp"
#include "fn___assert.hpp"



void fn_HSD_ShadowAddObject(PPC::Runtime::GCContext* context)
{
/*8041D938 0041A738*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8041D93C 0041A73C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8041D940 0041A740*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8041D944 0041A744*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8041D948 0041A748*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8041D94C 0041A74C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 8041D950 0041A750  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*8041D954 0041A754*/ PPC::Runtime::ASM::beq(.L_8041D9CC);
/*8041D958 0041A758*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8041D95C 0041A75C*/ PPC::Runtime::ASM::bne(.L_8041D964);
/*8041D960 0041A760*/ PPC::Runtime::ASM::b(.L_8041D9CC);
RUNTIME_PPC_JUMP_LABEL(.L_8041D964, 0x8041D964) //this is a jump label
/*8041D964 0041A764*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8041D968 0041A768*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8041D96C 0041A76C*/ PPC::Runtime::ASM::b(.L_8041D980);
RUNTIME_PPC_JUMP_LABEL(.L_8041D970, 0x8041D970) //this is a jump label
/*8041D970 0041A770*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8041D974 0041A774*/ PPC::Runtime::ASM::cmplw(context->r0, context->r31);
/*8041D978 0041A778*/ PPC::Runtime::ASM::beq(.L_8041D9CC);
/*8041D97C 0041A77C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_8041D980, 0x8041D980) //this is a jump label
/*8041D980 0041A780*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8041D984 0041A784*/ PPC::Runtime::ASM::bne(.L_8041D970);
/*8041D988 0041A788*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8041D98C 0041A78C*/ PPC::Runtime::ASM::bl(fn_HSD_SListPrepend);
/*8041D990 0041A790*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8041D994 0041A794*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8041D998 0041A798*/ PPC::Runtime::ASM::beq(.L_8041D9CC);
/*8041D99C 0041A79C*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8041D9A0 0041A7A0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8041D9A4 0041A7A4*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8041D9A8 0041A7A8*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8041D9AC 0041A7AC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*8041D9B0 0041A7B0*/ PPC::Runtime::ASM::bne(.L_8041D9CC);
/*8041D9B4 0041A7B4*/ PPC::Runtime::ASM::lis(context->r3, lbl_80504644 @ Get_MemoryOffset_HighBit);
/*8041D9B8 0041A7B8*/ PPC::Runtime::ASM::lis(context->r5, lbl_80504650 @ Get_MemoryOffset_HighBit);
/*8041D9BC 0041A7BC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80504644 @ Get_MemoryOffset_LowBit);
/*8041D9C0 0041A7C0*/ PPC::Runtime::ASM::li(context->r4, 0x5d);
/*8041D9C4 0041A7C4*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_80504650 @ Get_MemoryOffset_LowBit);
/*8041D9C8 0041A7C8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8041D9CC, 0x8041D9CC) //this is a jump label
/*8041D9CC 0041A7CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8041D9D0 0041A7D0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8041D9D4 0041A7D4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8041D9D8 0041A7D8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8041D9DC 0041A7DC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8041D9E0 0041A7E0*/ PPC::Runtime::ASM::blr();
}
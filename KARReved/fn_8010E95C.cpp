//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800DBE48.hpp"



void fn_8010E95C(PPC::Runtime::GCContext* context)
{
/*8010E95C 0010B75C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8010E960 0010B760*/ PPC::Runtime::ASM::mflr(context->r0);
/*8010E964 0010B764*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8010E968 0010B768*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8010E96C 0010B76C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8010E970 0010B770*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010E974 0010B774*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8010E978 0010B778*/ PPC::Runtime::ASM::lis(context->r3, StructWithFuncPtrs_145 @ Get_MemoryOffset_HighBit);
/*8010E97C 0010B77C*/ PPC::Runtime::ASM::addi(context->r31, context->r3, StructWithFuncPtrs_145 @ Get_MemoryOffset_LowBit);
/*8010E980 0010B780*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8010E984 0010B784*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8010E988 0010B788*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8010E98C 0010B78C*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8010E990 0010B790*/ PPC::Runtime::ASM::beq(.L_8010E9A4);
/*8010E994 0010B794*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8010E998 0010B798*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8010E99C 0010B79C*/ PPC::Runtime::ASM::beq(.L_8010E9A4);
/*8010E9A0 0010B7A0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8010E9A4, 0x8010E9A4) //this is a jump label
/*8010E9A4 0010B7A4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8010E9A8 0010B7A8*/ PPC::Runtime::ASM::bne(.L_8010E9BC);
/*8010E9AC 0010B7AC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xc);
/*8010E9B0 0010B7B0*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x1c);
/*8010E9B4 0010B7B4*/ PPC::Runtime::ASM::li(context->r4, 0x2b);
/*8010E9B8 0010B7B8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8010E9BC, 0x8010E9BC) //this is a jump label
/*8010E9BC 0010B7BC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8010E9C0 0010B7C0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8010E9C4 0010B7C4*/ PPC::Runtime::ASM::bl(fn_800DBE48);
/*8010E9C8 0010B7C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*8010E9CC 0010B7CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8010E9D0 0010B7D0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xa);
/*8010E9D4 0010B7D4*/ PPC::Runtime::ASM::ble(.L_8010E9E8);
/*8010E9D8 0010B7D8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xc);
/*8010E9DC 0010B7DC*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x44);
/*8010E9E0 0010B7E0*/ PPC::Runtime::ASM::li(context->r4, 0x31);
/*8010E9E4 0010B7E4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8010E9E8, 0x8010E9E8) //this is a jump label
/*8010E9E8 0010B7E8*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*8010E9EC 0010B7EC*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8010E9F0 0010B7F0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8010E9F4 0010B7F4*/ PPC::Runtime::ASM::b(.L_8010EA14);
RUNTIME_PPC_JUMP_LABEL(.L_8010E9F8, 0x8010E9F8) //this is a jump label
/*8010E9F8 0010B7F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8010E9FC 0010B7FC*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x8);
/*8010EA00 0010B800*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x10);
/*8010EA04 0010B804*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*8010EA08 0010B808*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*8010EA0C 0010B80C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x728, context->r5));
/*8010EA10 0010B810*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_8010EA14, 0x8010EA14) //this is a jump label
/*8010EA14 0010B814*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*8010EA18 0010B818*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8010EA1C 0010B81C*/ PPC::Runtime::ASM::cmpw(context->r6, context->r0);
/*8010EA20 0010B820*/ PPC::Runtime::ASM::blt(.L_8010E9F8);
/*8010EA24 0010B824*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8010EA28 0010B828*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8010EA2C 0010B82C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8010EA30 0010B830*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010EA34 0010B834*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8010EA38 0010B838*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8010EA3C 0010B83C*/ PPC::Runtime::ASM::blr();
}
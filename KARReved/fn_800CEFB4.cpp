//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800CEFB4(PPC::Runtime::GCContext* context)
{
/*800CEFB4 000CBDB4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800CEFB8 000CBDB8*/ PPC::Runtime::ASM::mflr(context->r0);
/*800CEFBC 000CBDBC*/ PPC::Runtime::ASM::lis(context->r5, MemoryOffset_898 @ Get_MemoryOffset_HighBit);
/*800CEFC0 000CBDC0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800CEFC4 000CBDC4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800CEFC8 000CBDC8*/ PPC::Runtime::ASM::addi(context->r31, context->r5, MemoryOffset_898 @ Get_MemoryOffset_LowBit);
/*800CEFCC 000CBDCC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800CEFD0 000CBDD0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800CEFD4 000CBDD4*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*800CEFD8 000CBDD8*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800CEFDC 000CBDDC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x110, context->r4));
/*800CEFE0 000CBDE0*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*800CEFE4 000CBDE4*/ PPC::Runtime::ASM::bne(.L_800CEFF8);
/*800CEFE8 000CBDE8*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x5c);
/*800CEFEC 000CBDEC*/ PPC::Runtime::ASM::li(context->r3, String_ "grlib." Get_MemoryOffset_SDA21);
/*800CEFF0 000CBDF0*/ PPC::Runtime::ASM::li(context->r4, 0x17b);
/*800CEFF4 000CBDF4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800CEFF8, 0x800CEFF8) //this is a jump label
/*800CEFF8 000CBDF8*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x0);
/*800CEFFC 000CBDFC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800CF000 000CBE00*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800CF004 000CBE04*/ PPC::Runtime::ASM::blt(.L_800CF018);
/*800CF008 000CBE08*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*800CF00C 000CBE0C*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*800CF010 000CBE10*/ PPC::Runtime::ASM::bge(.L_800CF018);
/*800CF014 000CBE14*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800CF018, 0x800CF018) //this is a jump label
/*800CF018 000CBE18*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800CF01C 000CBE1C*/ PPC::Runtime::ASM::bne(.L_800CF030);
/*800CF020 000CBE20*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x68);
/*800CF024 000CBE24*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x74);
/*800CF028 000CBE28*/ PPC::Runtime::ASM::li(context->r4, 0xb8);
/*800CF02C 000CBE2C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800CF030, 0x800CF030) //this is a jump label
/*800CF030 000CBE30*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800CF034 000CBE34*/ PPC::Runtime::ASM::slwi(context->r0, context->r29, 2);
/*800CF038 000CBE38*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*800CF03C 000CBE3C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800CF040 000CBE40*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800CF044 000CBE44*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800CF048 000CBE48*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800CF04C 000CBE4C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800CF050 000CBE50*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800CF054 000CBE54*/ PPC::Runtime::ASM::blr();
}
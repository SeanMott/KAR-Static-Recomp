//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_TRK_memcpy.hpp"



void fn_TRKReadBuffer1_ui64(PPC::Runtime::GCContext* context)
{
/*803BDCB4 003BAAB4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*803BDCB8 003BAAB8*/ PPC::Runtime::ASM::mflr(context->r0);
/*803BDCBC 003BAABC*/ PPC::Runtime::ASM::lis(context->r5, gTRKBigEndian @ Get_MemoryOffset_HighBit);
/*803BDCC0 003BAAC0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803BDCC4 003BAAC4*/ PPC::Runtime::ASM::stmw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803BDCC8 003BAAC8*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*803BDCCC 003BAACC*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*803BDCD0 003BAAD0*/ PPC::Runtime::ASM::lwz(context->r0, gTRKBigEndian @ Get_MemoryOffset_LowBit ( context->r5 ));
/*803BDCD4 003BAAD4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803BDCD8 003BAAD8*/ PPC::Runtime::ASM::beq(.L_803BDCE4);
/*803BDCDC 003BAADC*/ PPC::Runtime::ASM::mr(context->r31, context->r30);
/*803BDCE0 003BAAE0*/ PPC::Runtime::ASM::b(.L_803BDCE8);
RUNTIME_PPC_JUMP_LABEL(.L_803BDCE4, 0x803BDCE4) //this is a jump label
/*803BDCE4 003BAAE4*/ PPC::Runtime::ASM::addi(context->r31, context->r1, 0x8);
RUNTIME_PPC_JUMP_LABEL(.L_803BDCE8, 0x803BDCE8) //this is a jump label
/*803BDCE8 003BAAE8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*803BDCEC 003BAAEC*/ PPC::Runtime::ASM::li(context->r28, 0x8);
/*803BDCF0 003BAAF0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*803BDCF4 003BAAF4*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*803BDCF8 003BAAF8*/ PPC::Runtime::ASM::subf(context->r0, context->r3, context->r0);
/*803BDCFC 003BAAFC*/ PPC::Runtime::ASM::cmplw(context->r28, context->r0);
/*803BDD00 003BAB00*/ PPC::Runtime::ASM::ble(.L_803BDD0C);
/*803BDD04 003BAB04*/ PPC::Runtime::ASM::li(context->r29, 0x302);
/*803BDD08 003BAB08*/ PPC::Runtime::ASM::mr(context->r28, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_803BDD0C, 0x803BDD0C) //this is a jump label
/*803BDD0C 003BAB0C*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0x10);
/*803BDD10 003BAB10*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803BDD14 003BAB14*/ PPC::Runtime::ASM::mr(context->r5, context->r28);
/*803BDD18 003BAB18*/ PPC::Runtime::ASM::add(context->r4, context->r27, context->r4);
/*803BDD1C 003BAB1C*/ PPC::Runtime::ASM::bl(fn_TRK_memcpy);
/*803BDD20 003BAB20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*803BDD24 003BAB24*/ PPC::Runtime::ASM::lis(context->r3, gTRKBigEndian @ Get_MemoryOffset_HighBit);
/*803BDD28 003BAB28*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r28);
/*803BDD2C 003BAB2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*803BDD30 003BAB30*/ PPC::Runtime::ASM::lwz(context->r0, gTRKBigEndian @ Get_MemoryOffset_LowBit ( context->r3 ));
/*803BDD34 003BAB34*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803BDD38 003BAB38*/ PPC::Runtime::ASM::bne(.L_803BDD84);
/*803BDD3C 003BAB3C*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x0);
/*803BDD40 003BAB40*/ PPC::Runtime::ASM::bne(.L_803BDD84);
/*803BDD44 003BAB44*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r31));
/*803BDD48 003BAB48*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803BDD4C 003BAB4C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r31));
/*803BDD50 003BAB50*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r30));
/*803BDD54 003BAB54*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r31));
/*803BDD58 003BAB58*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r30));
/*803BDD5C 003BAB5C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*803BDD60 003BAB60*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r30));
/*803BDD64 003BAB64*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r31));
/*803BDD68 003BAB68*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*803BDD6C 003BAB6C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*803BDD70 003BAB70*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r30));
/*803BDD74 003BAB74*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r31));
/*803BDD78 003BAB78*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r30));
/*803BDD7C 003BAB7C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803BDD80 003BAB80*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_803BDD84, 0x803BDD84) //this is a jump label
/*803BDD84 003BAB84*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*803BDD88 003BAB88*/ PPC::Runtime::ASM::lmw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803BDD8C 003BAB8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803BDD90 003BAB90*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803BDD94 003BAB94*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*803BDD98 003BAB98*/ PPC::Runtime::ASM::blr();
}
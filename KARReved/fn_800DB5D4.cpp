//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800DB6D4.hpp"



void fn_800DB5D4(PPC::Runtime::GCContext* context)
{
/*800DB5D4 000D83D4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800DB5D8 000D83D8*/ PPC::Runtime::ASM::mflr(context->r0);
/*800DB5DC 000D83DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800DB5E0 000D83E0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800DB5E4 000D83E4*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*800DB5E8 000D83E8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800DB5EC 000D83EC*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*800DB5F0 000D83F0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800DB5F4 000D83F4*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*800DB5F8 000D83F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800DB5FC 000D83FC*/ PPC::Runtime::ASM::cmpw(context->r0, context->r31);
/*800DB600 000D8400*/ PPC::Runtime::ASM::bgt(.L_800DB61C);
/*800DB604 000D8404*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_930 @ Get_MemoryOffset_HighBit);
/*800DB608 000D8408*/ PPC::Runtime::ASM::lis(context->r5, "String_Debug" itCounterIdAll->idParamNum>idParamID ""@ha
/* 800DB60C 000D840C  38 63 3E AC */	addi r3, r3, MemoryOffset_930@l
/* 800DB610 000D8410  38 80 03 AE */	li r4, 0x3ae
/* 800DB614 000D8414  38 A5 3E B8 */	addi r5, r5," tring_Debug_ "bitCounterIdAll->idParamNum>idParamI" @ Get_MemoryOffset_LowBit);
/*800DB618 000D8418*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800DB61C, 0x800DB61C) //this is a jump label
/*800DB61C 000D841C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800DB620 000D8420*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 3);
/*800DB624 000D8424*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x824);
/*800DB628 000D8428*/ PPC::Runtime::ASM::li(context->r4, 0x1f4);
/*800DB62C 000D842C*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r0);
/*800DB630 000D8430*/ PPC::Runtime::ASM::bl(fn_800DB6D4);
/*800DB634 000D8434*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800DB638 000D8438*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x824);
/*800DB63C 000D843C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800DB640 000D8440*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800DB644 000D8444*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800DB648 000D8448*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800DB64C 000D844C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800DB650 000D8450*/ PPC::Runtime::ASM::blr();
}
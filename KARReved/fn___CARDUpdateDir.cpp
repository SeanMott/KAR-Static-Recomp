//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___CARDCheckSum.hpp"
#include "fn_DCStoreRange.hpp"
#include "fn_EraseCallback_2.hpp"
#include "fn_EraseCallback_2.hpp"
#include "fn___CARDEraseSector.hpp"



void fn___CARDUpdateDir(PPC::Runtime::GCContext* context)
{
/*803E4B90 003E1990*/ PPC::Runtime::ASM::mflr(context->r0);
/*803E4B94 003E1994*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803E4B98 003E1998*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x28, context->r1));
/*803E4B9C 003E199C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803E4BA0 003E19A0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803E4BA4 003E19A4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803E4BA8 003E19A8*/ PPC::Runtime::ASM::addi(context->r29, context->r4, 0x0);
/*803E4BAC 003E19AC*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803E4BB0 003E19B0*/ PPC::Runtime::ASM::addi(context->r28, context->r3, 0x0);
/*803E4BB4 003E19B4*/ PPC::Runtime::ASM::mulli(context->r5, context->r28, 0x110);
/*803E4BB8 003E19B8*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18056E4E8 @ Get_MemoryOffset_HighBit);
/*803E4BBC 003E19BC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, STRUCT_BYTE4_COUNT_18056E4E8 @ Get_MemoryOffset_LowBit);
/*803E4BC0 003E19C0*/ PPC::Runtime::ASM::add(context->r30, context->r0, context->r5);
/*803E4BC4 003E19C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803E4BC8 003E19C8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803E4BCC 003E19CC*/ PPC::Runtime::ASM::bne(.L_803E4BD8);
/*803E4BD0 003E19D0*/ PPC::Runtime::ASM::li(context->r3, -0x3);
/*803E4BD4 003E19D4*/ PPC::Runtime::ASM::b(.L_803E4C34);
RUNTIME_PPC_JUMP_LABEL(.L_803E4BD8, 0x803E4BD8) //this is a jump label
/*803E4BD8 003E19D8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r30));
/*803E4BDC 003E19DC*/ PPC::Runtime::ASM::li(context->r4, 0x1ffc);
/*803E4BE0 003E19E0*/ PPC::Runtime::ASM::lha(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ffa, context->r31));
/*803E4BE4 003E19E4*/ PPC::Runtime::ASM::addi(context->r6, context->r31, 0x1fc0);
/*803E4BE8 003E19E8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*803E4BEC 003E19EC*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x1);
/*803E4BF0 003E19F0*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ffa, context->r31));
/*803E4BF4 003E19F4*/ PPC::Runtime::ASM::addi(context->r5, context->r6, 0x3c);
/*803E4BF8 003E19F8*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x3e);
/*803E4BFC 003E19FC*/ PPC::Runtime::ASM::bl(fn___CARDCheckSum);
/*803E4C00 003E1A00*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*803E4C04 003E1A04*/ PPC::Runtime::ASM::li(context->r4, 0x2000);
/*803E4C08 003E1A08*/ PPC::Runtime::ASM::bl(fn_DCStoreRange);
/*803E4C0C 003E1A0C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r30));
/*803E4C10 003E1A10*/ PPC::Runtime::ASM::lis(context->r3, fn_EraseCallback_2 @ Get_MemoryOffset_HighBit);
/*803E4C14 003E1A14*/ PPC::Runtime::ASM::addi(context->r5, context->r3, fn_EraseCallback_2 @ Get_MemoryOffset_LowBit);
/*803E4C18 003E1A18*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r30));
/*803E4C1C 003E1A1C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*803E4C20 003E1A20*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*803E4C24 003E1A24*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r31);
/*803E4C28 003E1A28*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 13);
/*803E4C2C 003E1A2C*/ PPC::Runtime::ASM::mullw(context->r4, context->r4, context->r0);
/*803E4C30 003E1A30*/ PPC::Runtime::ASM::bl(fn___CARDEraseSector);
RUNTIME_PPC_JUMP_LABEL(.L_803E4C34, 0x803E4C34) //this is a jump label
/*803E4C34 003E1A34*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803E4C38 003E1A38*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803E4C3C 003E1A3C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803E4C40 003E1A40*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803E4C44 003E1A44*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803E4C48 003E1A48*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x28);
/*803E4C4C 003E1A4C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803E4C50 003E1A50*/ PPC::Runtime::ASM::blr();
}
//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___CARDGetDirBlock.hpp"
#include "OSGetTime.hpp"
#include "fn___div2i.hpp"
#include "fn___CARDUpdateDir.hpp"
#include "fn___CARDGetFatBlock.hpp"
#include "fn_EraseCallback_3.hpp"
#include "fn_EraseCallback_3.hpp"
#include "fn___CARDEraseSector.hpp"
#include "fn___CARDPutControlBlock.hpp"



void fn_WriteCallback_3(PPC::Runtime::GCContext* context)
{
/*803E7AD0 003E48D0*/ PPC::Runtime::ASM::mflr(context->r0);
/*803E7AD4 003E48D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803E7AD8 003E48D8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803E7ADC 003E48DC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803E7AE0 003E48E0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803E7AE4 003E48E4*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x0);
/*803E7AE8 003E48E8*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18056E4E8 @ Get_MemoryOffset_HighBit);
/*803E7AEC 003E48EC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803E7AF0 003E48F0*/ PPC::Runtime::ASM::mulli(context->r5, context->r30, 0x110);
/*803E7AF4 003E48F4*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803E7AF8 003E48F8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, STRUCT_BYTE4_COUNT_18056E4E8 @ Get_MemoryOffset_LowBit);
/* 803E7AFC 003E48FC  7C 9C 23 79 */ mr. context->r28 , context->r4
/*803E7B00 003E4900*/ PPC::Runtime::ASM::add(context->r31, context->r0, context->r5);
/*803E7B04 003E4904*/ PPC::Runtime::ASM::blt(.L_803E7BF4);
/*803E7B08 003E4908*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r31));
/*803E7B0C 003E490C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*803E7B10 003E4910*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803E7B14 003E4914*/ PPC::Runtime::ASM::bge(.L_803E7B20);
/*803E7B18 003E4918*/ PPC::Runtime::ASM::li(context->r28, -0xe);
/*803E7B1C 003E491C*/ PPC::Runtime::ASM::b(.L_803E7BF4);
RUNTIME_PPC_JUMP_LABEL(.L_803E7B20, 0x803E7B20) //this is a jump label
/*803E7B20 003E4920*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*803E7B24 003E4924*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r3);
/*803E7B28 003E4928*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*803E7B2C 003E492C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*803E7B30 003E4930*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803E7B34 003E4934*/ PPC::Runtime::ASM::bgt(.L_803E7B88);
/*803E7B38 003E4938*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803E7B3C 003E493C*/ PPC::Runtime::ASM::bl(fn___CARDGetDirBlock);
/*803E7B40 003E4940*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*803E7B44 003E4944*/ PPC::Runtime::ASM::lis(context->r4, 0x8000);
/*803E7B48 003E4948*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r4));
/*803E7B4C 003E494C*/ PPC::Runtime::ASM::slwi(context->r4, context->r5, 6);
/*803E7B50 003E4950*/ PPC::Runtime::ASM::add(context->r28, context->r3, context->r4);
/*803E7B54 003E4954*/ PPC::Runtime::ASM::srwi(context->r29, context->r0, 2);
/*803E7B58 003E4958*/ PPC::Runtime::ASM::bl(OSGetTime);
/*803E7B5C 003E495C*/ PPC::Runtime::ASM::addi(context->r6, context->r29, 0x0);
/*803E7B60 003E4960*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803E7B64 003E4964*/ PPC::Runtime::ASM::bl(fn___div2i);
/*803E7B68 003E4968*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r28));
/*803E7B6C 003E496C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803E7B70 003E4970*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*803E7B74 003E4974*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r31));
/*803E7B78 003E4978*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r31));
/*803E7B7C 003E497C*/ PPC::Runtime::ASM::bl(fn___CARDUpdateDir);
/*803E7B80 003E4980*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*803E7B84 003E4984*/ PPC::Runtime::ASM::b(.L_803E7BEC);
RUNTIME_PPC_JUMP_LABEL(.L_803E7B88, 0x803E7B88) //this is a jump label
/*803E7B88 003E4988*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803E7B8C 003E498C*/ PPC::Runtime::ASM::bl(fn___CARDGetFatBlock);
/*803E7B90 003E4990*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*803E7B94 003E4994*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*803E7B98 003E4998*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*803E7B9C 003E499C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*803E7BA0 003E49A0*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*803E7BA4 003E49A4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 1);
/*803E7BA8 003E49A8*/ PPC::Runtime::ASM::lhzx(context->r0, context->r3, context->r0);
/*803E7BAC 003E49AC*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*803E7BB0 003E49B0*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*803E7BB4 003E49B4*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x5);
/*803E7BB8 003E49B8*/ PPC::Runtime::ASM::blt(.L_803E7BC8);
/*803E7BBC 003E49BC*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*803E7BC0 003E49C0*/ PPC::Runtime::ASM::cmplw(context->r4, context->r0);
/*803E7BC4 003E49C4*/ PPC::Runtime::ASM::blt(.L_803E7BD0);
RUNTIME_PPC_JUMP_LABEL(.L_803E7BC8, 0x803E7BC8) //this is a jump label
/*803E7BC8 003E49C8*/ PPC::Runtime::ASM::li(context->r28, -0x6);
/*803E7BCC 003E49CC*/ PPC::Runtime::ASM::b(.L_803E7BF4);
RUNTIME_PPC_JUMP_LABEL(.L_803E7BD0, 0x803E7BD0) //this is a jump label
/*803E7BD0 003E49D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*803E7BD4 003E49D4*/ PPC::Runtime::ASM::lis(context->r3, fn_EraseCallback_3 @ Get_MemoryOffset_HighBit);
/*803E7BD8 003E49D8*/ PPC::Runtime::ASM::addi(context->r5, context->r3, fn_EraseCallback_3 @ Get_MemoryOffset_LowBit);
/*803E7BDC 003E49DC*/ PPC::Runtime::ASM::mullw(context->r4, context->r0, context->r4);
/*803E7BE0 003E49E0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*803E7BE4 003E49E4*/ PPC::Runtime::ASM::bl(fn___CARDEraseSector);
/*803E7BE8 003E49E8*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_803E7BEC, 0x803E7BEC) //this is a jump label
/*803E7BEC 003E49EC*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x0);
/*803E7BF0 003E49F0*/ PPC::Runtime::ASM::bge(.L_803E7C20);
RUNTIME_PPC_JUMP_LABEL(.L_803E7BF4, 0x803E7BF4) //this is a jump label
/*803E7BF4 003E49F4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r31));
/*803E7BF8 003E49F8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803E7BFC 003E49FC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*803E7C00 003E4A00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r31));
/*803E7C04 003E4A04*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*803E7C08 003E4A08*/ PPC::Runtime::ASM::bl(fn___CARDPutControlBlock);
/*803E7C0C 003E4A0C*/ PPC::Runtime::ASM::addi(context->r12, context->r29, 0x0);
/*803E7C10 003E4A10*/ PPC::Runtime::ASM::mtlr(context->r12);
/*803E7C14 003E4A14*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*803E7C18 003E4A18*/ PPC::Runtime::ASM::addi(context->r4, context->r28, 0x0);
/* 803E7C1C 003E4A1C  4E 80 00 21 */ blrl
RUNTIME_PPC_JUMP_LABEL(.L_803E7C20, 0x803E7C20) //this is a jump label
/*803E7C20 003E4A20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803E7C24 003E4A24*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803E7C28 003E4A28*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803E7C2C 003E4A2C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803E7C30 003E4A30*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803E7C34 003E4A34*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803E7C38 003E4A38*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803E7C3C 003E4A3C*/ PPC::Runtime::ASM::blr();
}
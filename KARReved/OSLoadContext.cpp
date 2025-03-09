//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "OSDisableInterrupts.hpp"
#include "OSDisableInterrupts.hpp"
#include "OSDisableInterrupts.hpp"



void OSLoadContext(PPC::Runtime::GCContext* context)
{
/*803D4658 003D1458*/ PPC::Runtime::ASM::lis(context->r4, OSDisableInterrupts @ Get_MemoryOffset_HighBit);
/*803D465C 003D145C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x198, context->r3));
/*803D4660 003D1460*/ PPC::Runtime::ASM::addi(context->r5, context->r4, OSDisableInterrupts @ Get_MemoryOffset_LowBit);
/*803D4664 003D1464*/ PPC::Runtime::ASM::cmplw(context->r6, context->r5);
/*803D4668 003D1468*/ PPC::Runtime::ASM::ble(.L_803D4680);
/*803D466C 003D146C*/ PPC::Runtime::ASM::lis(context->r4, OSDisableInterrupts + 0xC @ Get_MemoryOffset_HighBit);
/*803D4670 003D1470*/ PPC::Runtime::ASM::addi(context->r0, context->r4, OSDisableInterrupts + 0xC @ Get_MemoryOffset_LowBit);
/*803D4674 003D1474*/ PPC::Runtime::ASM::cmplw(context->r6, context->r0);
/*803D4678 003D1478*/ PPC::Runtime::ASM::bge(.L_803D4680);
/*803D467C 003D147C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x198, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_803D4680, 0x803D4680) //this is a jump label
/*803D4680 003D1480*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803D4684 003D1484*/ PPC::Runtime::ASM::lwz(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803D4688 003D1488*/ PPC::Runtime::ASM::lwz(context->r2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*803D468C 003D148C*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a2, context->r3));
/*803D4690 003D1490*/ PPC::Runtime::ASM::rlwinm.(context->r5, context->r4, 0, 30, 30);
/*803D4694 003D1494*/ PPC::Runtime::ASM::beq(.L_803D46A8);
/*803D4698 003D1498*/ PPC::Runtime::ASM::rlwinm(context->r4, context->r4, 0, 31, 29);
/*803D469C 003D149C*/ PPC::Runtime::ASM::sth(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a2, context->r3));
/*803D46A0 003D14A0*/ PPC::Runtime::ASM::lmw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*803D46A4 003D14A4*/ PPC::Runtime::ASM::b(.L_803D46AC);
RUNTIME_PPC_JUMP_LABEL(.L_803D46A8, 0x803D46A8) //this is a jump label
/*803D46A8 003D14A8*/ PPC::Runtime::ASM::lmw(context->r13, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_803D46AC, 0x803D46AC) //this is a jump label
/*803D46AC 003D14AC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a8, context->r3));
/*803D46B0 003D14B0*/ PPC::Runtime::ASM::mtspr(context->GQR1, context->r4);
/*803D46B4 003D14B4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ac, context->r3));
/*803D46B8 003D14B8*/ PPC::Runtime::ASM::mtspr(context->GQR2, context->r4);
/*803D46BC 003D14BC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b0, context->r3));
/*803D46C0 003D14C0*/ PPC::Runtime::ASM::mtspr(context->GQR3, context->r4);
/*803D46C4 003D14C4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4, context->r3));
/*803D46C8 003D14C8*/ PPC::Runtime::ASM::mtspr(context->GQR4, context->r4);
/*803D46CC 003D14CC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r3));
/*803D46D0 003D14D0*/ PPC::Runtime::ASM::mtspr(context->GQR5, context->r4);
/*803D46D4 003D14D4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1bc, context->r3));
/*803D46D8 003D14D8*/ PPC::Runtime::ASM::mtspr(context->GQR6, context->r4);
/*803D46DC 003D14DC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c0, context->r3));
/*803D46E0 003D14E0*/ PPC::Runtime::ASM::mtspr(context->GQR7, context->r4);
/*803D46E4 003D14E4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r3));
/*803D46E8 003D14E8*/ PPC::Runtime::ASM::mtcrf(255, context->r4);
/*803D46EC 003D14EC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r3));
/*803D46F0 003D14F0*/ PPC::Runtime::ASM::mtlr(context->r4);
/*803D46F4 003D14F4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r3));
/*803D46F8 003D14F8*/ PPC::Runtime::ASM::mtctr(context->r4);
/*803D46FC 003D14FC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r3));
/*803D4700 003D1500*/ PPC::Runtime::ASM::mtxer(context->r4);
/*803D4704 003D1504*/ PPC::Runtime::ASM::mfmsr(context->r4);
/*803D4708 003D1508*/ PPC::Runtime::ASM::rlwinm(context->r4, context->r4, 0, 17, 15);
/*803D470C 003D150C*/ PPC::Runtime::ASM::rlwinm(context->r4, context->r4, 0, 31, 29);
/*803D4710 003D1510*/ PPC::Runtime::ASM::mtmsr(context->r4);
/*803D4714 003D1514*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x198, context->r3));
/*803D4718 003D1518*/ PPC::Runtime::ASM::mtsrr0(context->r4);
/*803D471C 003D151C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x19c, context->r3));
/*803D4720 003D1520*/ PPC::Runtime::ASM::mtsrr1(context->r4);
/*803D4724 003D1524*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*803D4728 003D1528*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*803D472C 003D152C*/ PPC::Runtime::ASM::rfi();
}
//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8022C568.hpp"
#include "fn_800DAA54.hpp"



void fn_800E6758(PPC::Runtime::GCContext* context)
{
/*800E6758 000E3558*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*800E675C 000E355C*/ PPC::Runtime::ASM::mflr(context->r0);
/*800E6760 000E3560*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800E6764 000E3564*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*800E6768 000E3568*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*800E676C 000E356C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800E6770 000E3570*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*800E6774 000E3574*/ PPC::Runtime::ASM::lwz(context->r30, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800E6778 000E3578*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*800E677C 000E357C*/ PPC::Runtime::ASM::beq(.L_800E681C);
/*800E6780 000E3580*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*800E6784 000E3584*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*800E6788 000E3588*/ PPC::Runtime::ASM::bl(fn_8022C568);
/*800E678C 000E358C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800E6790 000E3590*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*800E6794 000E3594*/ PPC::Runtime::ASM::bl(fn_800DAA54);
/*800E6798 000E3598*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*800E679C 000E359C*/ PPC::Runtime::ASM::beq(.L_800E681C);
/*800E67A0 000E35A0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*800E67A4 000E35A4*/ PPC::Runtime::ASM::slwi(context->r0, context->r3, 3);
/*800E67A8 000E35A8*/ PPC::Runtime::ASM::add.(context->r28, context->r4, context->r0);
/*800E67AC 000E35AC*/ PPC::Runtime::ASM::beq(.L_800E681C);
/*800E67B0 000E35B0*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*800E67B4 000E35B4*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*800E67B8 000E35B8*/ PPC::Runtime::ASM::b(.L_800E6810);
RUNTIME_PPC_JUMP_LABEL(.L_800E67BC, 0x800E67BC) //this is a jump label
/*800E67BC 000E35BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*800E67C0 000E35C0*/ PPC::Runtime::ASM::add(context->r25, context->r0, context->r29);
/*800E67C4 000E35C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*800E67C8 000E35C8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800E67CC 000E35CC*/ PPC::Runtime::ASM::beq(.L_800E6808);
/*800E67D0 000E35D0*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*800E67D4 000E35D4*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*800E67D8 000E35D8*/ PPC::Runtime::ASM::b(.L_800E67FC);
RUNTIME_PPC_JUMP_LABEL(.L_800E67DC, 0x800E67DC) //this is a jump label
/*800E67DC 000E35DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*800E67E0 000E35E0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*800E67E4 000E35E4*/ PPC::Runtime::ASM::lhzx(context->r0, context->r3, context->r30);
/*800E67E8 000E35E8*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*800E67EC 000E35EC*/ PPC::Runtime::ASM::lwzx(context->r3, context->r31, context->r0);
/*800E67F0 000E35F0*/ PPC::Runtime::ASM::bl(fn_HSD_DObjSetFlags);
/*800E67F4 000E35F4*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x2);
/*800E67F8 000E35F8*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800E67FC, 0x800E67FC) //this is a jump label
/*800E67FC 000E35FC*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r25));
/*800E6800 000E3600*/ PPC::Runtime::ASM::cmpw(context->r26, context->r0);
/*800E6804 000E3604*/ PPC::Runtime::ASM::blt(.L_800E67DC);
RUNTIME_PPC_JUMP_LABEL(.L_800E6808, 0x800E6808) //this is a jump label
/*800E6808 000E3608*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x8);
/*800E680C 000E360C*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800E6810, 0x800E6810) //this is a jump label
/*800E6810 000E3610*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*800E6814 000E3614*/ PPC::Runtime::ASM::cmpw(context->r27, context->r0);
/*800E6818 000E3618*/ PPC::Runtime::ASM::blt(.L_800E67BC);
RUNTIME_PPC_JUMP_LABEL(.L_800E681C, 0x800E681C) //this is a jump label
/*800E681C 000E361C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*800E6820 000E3620*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*800E6824 000E3624*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800E6828 000E3628*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800E682C 000E362C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*800E6830 000E3630*/ PPC::Runtime::ASM::blr();
}
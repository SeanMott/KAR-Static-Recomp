//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800DC9A0.hpp"
#include "fn_800992C4.hpp"



void fn_800A36CC(PPC::Runtime::GCContext* context)
{
/*800A36CC 000A04CC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x70, context->r1));
/*800A36D0 000A04D0*/ PPC::Runtime::ASM::mflr(context->r0);
/*800A36D4 000A04D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*800A36D8 000A04D8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x70);
/*800A36DC 000A04DC*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*800A36E0 000A04E0*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
/*800A36E4 000A04E4*/ PPC::Runtime::ASM::mr(context->r26, context->r4);
/*800A36E8 000A04E8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800A36EC 000A04EC*/ PPC::Runtime::ASM::addi(context->r30, context->r1, 0x44);
/*800A36F0 000A04F0*/ PPC::Runtime::ASM::addi(context->r29, context->r1, 0x38);
/*800A36F4 000A04F4*/ PPC::Runtime::ASM::addi(context->r28, context->r1, 0x2c);
/*800A36F8 000A04F8*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*800A36FC 000A04FC*/ PPC::Runtime::ASM::b(.L_800A3730);
RUNTIME_PPC_JUMP_LABEL(.L_800A3700, 0x800A3700) //this is a jump label
/*800A3700 000A0500*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r25));
/*800A3704 000A0504*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*800A3708 000A0508*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*800A370C 000A050C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x54);
/*800A3710 000A0510*/ PPC::Runtime::ASM::bl(fn_800DC9A0);
/*800A3714 000A0514*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*800A3718 000A0518*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*800A371C 000A051C*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*800A3720 000A0520*/ PPC::Runtime::ASM::mr(context->r7, context->r26);
/*800A3724 000A0524*/ PPC::Runtime::ASM::li(context->r6, lbl_805D5B68 @ Get_MemoryOffset_SDA21);
/*800A3728 000A0528*/ PPC::Runtime::ASM::bl(fn_800992C4);
/*800A372C 000A052C*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800A3730, 0x800A3730) //this is a jump label
/*800A3730 000A0530*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r31));
/*800A3734 000A0534*/ PPC::Runtime::ASM::cmpw(context->r27, context->r0);
/*800A3738 000A0538*/ PPC::Runtime::ASM::blt(.L_800A3700);
/*800A373C 000A053C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x70);
/*800A3740 000A0540*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*800A3744 000A0544*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*800A3748 000A0548*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800A374C 000A054C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x70);
/*800A3750 000A0550*/ PPC::Runtime::ASM::blr();
}
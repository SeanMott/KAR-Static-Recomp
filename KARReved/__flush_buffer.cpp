//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void __flush_buffer(PPC::Runtime::GCContext* context)
{
/*803B376C 003B056C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803B3770 003B0570*/ PPC::Runtime::ASM::mflr(context->r0);
/*803B3774 003B0574*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803B3778 003B0578*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803B377C 003B057C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*803B3780 003B0580*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803B3784 003B0584*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*803B3788 003B0588*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*803B378C 003B058C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*803B3790 003B0590*/ PPC::Runtime::ASM::subf.(context->r0, context->r3, context->r0);
/*803B3794 003B0594*/ PPC::Runtime::ASM::beq(.L_803B37E4);
/*803B3798 003B0598*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*803B379C 003B059C*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x28);
/*803B37A0 003B05A0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*803B37A4 003B05A4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803B37A8 003B05A8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*803B37AC 003B05AC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r31));
/*803B37B0 003B05B0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803B37B4 003B05B4*/ PPC::Runtime::ASM::bctrl();
/*803B37B8 003B05B8*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*803B37BC 003B05BC*/ PPC::Runtime::ASM::beq(.L_803B37C8);
/*803B37C0 003B05C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*803B37C4 003B05C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_803B37C8, 0x803B37C8) //this is a jump label
/*803B37C8 003B05C8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803B37CC 003B05CC*/ PPC::Runtime::ASM::beq(.L_803B37D4);
/*803B37D0 003B05D0*/ PPC::Runtime::ASM::b(.L_803B3818);
RUNTIME_PPC_JUMP_LABEL(.L_803B37D4, 0x803B37D4) //this is a jump label
/*803B37D4 003B05D4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*803B37D8 003B05D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*803B37DC 003B05DC*/ PPC::Runtime::ASM::add(context->r0, context->r3, context->r0);
/*803B37E0 003B05E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_803B37E4, 0x803B37E4) //this is a jump label
/*803B37E4 003B05E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*803B37E8 003B05E8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803B37EC 003B05EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*803B37F0 003B05F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*803B37F4 003B05F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*803B37F8 003B05F8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*803B37FC 003B05FC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*803B3800 003B0600*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*803B3804 003B0604*/ PPC::Runtime::ASM::and(context->r4, context->r5, context->r4);
/*803B3808 003B0608*/ PPC::Runtime::ASM::subf(context->r0, context->r4, context->r0);
/*803B380C 003B060C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*803B3810 003B0610*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*803B3814 003B0614*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_803B3818, 0x803B3818) //this is a jump label
/*803B3818 003B0618*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803B381C 003B061C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803B3820 003B0620*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803B3824 003B0624*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803B3828 003B0628*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803B382C 003B062C*/ PPC::Runtime::ASM::blr();
}
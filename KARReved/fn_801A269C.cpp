//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80062CA4.hpp"



void fn_801A269C(PPC::Runtime::GCContext* context)
{
/*801A269C 0019F49C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*801A26A0 0019F4A0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A26A4 0019F4A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801A26A8 0019F4A8*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801A26AC 0019F4AC*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801A26B0 0019F4B0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801A26B4 0019F4B4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801A26B8 0019F4B8*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*801A26BC 0019F4BC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c4, context->r3));
/*801A26C0 0019F4C0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*801A26C4 0019F4C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c8, context->r31));
/*801A26C8 0019F4C8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801A26CC 0019F4CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A26D0 0019F4D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5cc, context->r31));
/*801A26D4 0019F4D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801A26D8 0019F4D8*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*801A26DC 0019F4DC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f31);
/*801A26E0 0019F4E0*/ PPC::Runtime::ASM::ble(.L_801A2748);
/*801A26E4 0019F4E4*/ PPC::Runtime::ASM::fsubs(context->f31, context->f1, context->f31);
/*801A26E8 0019F4E8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*801A26EC 0019F4EC*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*801A26F0 0019F4F0*/ PPC::Runtime::ASM::bl(fn_80062CA4);
/*801A26F4 0019F4F4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801A26F8 0019F4F8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A26FC 0019F4FC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801A2700 0019F500*/ PPC::Runtime::ASM::fmuls(context->f2, context->f2, context->f31);
/*801A2704 0019F504*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f31);
/*801A2708 0019F508*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f31);
/*801A270C 0019F50C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801A2710 0019F510*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A2714 0019F514*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801A2718 0019F518*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c4, context->r31));
/*801A271C 0019F51C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*801A2720 0019F520*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5b8, context->r31));
/*801A2724 0019F524*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A2728 0019F528*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c8, context->r31));
/*801A272C 0019F52C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*801A2730 0019F530*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5bc, context->r31));
/*801A2734 0019F534*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801A2738 0019F538*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5cc, context->r31));
/*801A273C 0019F53C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*801A2740 0019F540*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c0, context->r31));
/*801A2744 0019F544*/ PPC::Runtime::ASM::b(.L_801A2760);
RUNTIME_PPC_JUMP_LABEL(.L_801A2748, 0x801A2748) //this is a jump label
/*801A2748 0019F548*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c4, context->r31));
/*801A274C 0019F54C*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*801A2750 0019F550*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5b8, context->r31));
/*801A2754 0019F554*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5cc, context->r31));
/*801A2758 0019F558*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*801A275C 0019F55C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801A2760, 0x801A2760) //this is a jump label
/*801A2760 0019F560*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801A2764 0019F564*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801A2768 0019F568*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801A276C 0019F56C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801A2770 0019F570*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A2774 0019F574*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*801A2778 0019F578*/ PPC::Runtime::ASM::blr();
}
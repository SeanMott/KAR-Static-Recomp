//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80062CA4.hpp"



void fn_801A25B8(PPC::Runtime::GCContext* context)
{
/*801A25B8 0019F3B8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*801A25BC 0019F3BC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A25C0 0019F3C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801A25C4 0019F3C4*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801A25C8 0019F3C8*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801A25CC 0019F3CC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801A25D0 0019F3D0*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*801A25D4 0019F3D4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801A25D8 0019F3D8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x2dc);
/*801A25DC 0019F3DC*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*801A25E0 0019F3E0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1290 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A25E4 0019F3E4*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*801A25E8 0019F3E8*/ PPC::Runtime::ASM::beq(.L_801A2680);
/*801A25EC 0019F3EC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f31);
/*801A25F0 0019F3F0*/ PPC::Runtime::ASM::ble(.L_801A2658);
/*801A25F4 0019F3F4*/ PPC::Runtime::ASM::fsubs(context->f31, context->f1, context->f31);
/*801A25F8 0019F3F8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x2dc);
/*801A25FC 0019F3FC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*801A2600 0019F400*/ PPC::Runtime::ASM::bl(fn_80062CA4);
/*801A2604 0019F404*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801A2608 0019F408*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A260C 0019F40C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801A2610 0019F410*/ PPC::Runtime::ASM::fmuls(context->f2, context->f2, context->f31);
/*801A2614 0019F414*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f31);
/*801A2618 0019F418*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f31);
/*801A261C 0019F41C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801A2620 0019F420*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A2624 0019F424*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801A2628 0019F428*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2dc, context->r31));
/*801A262C 0019F42C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*801A2630 0019F430*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d0, context->r31));
/*801A2634 0019F434*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A2638 0019F438*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e0, context->r31));
/*801A263C 0019F43C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*801A2640 0019F440*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d4, context->r31));
/*801A2644 0019F444*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801A2648 0019F448*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e4, context->r31));
/*801A264C 0019F44C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*801A2650 0019F450*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d8, context->r31));
/*801A2654 0019F454*/ PPC::Runtime::ASM::b(.L_801A2680);
RUNTIME_PPC_JUMP_LABEL(.L_801A2658, 0x801A2658) //this is a jump label
/*801A2658 0019F458*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2dc, context->r31));
/*801A265C 0019F45C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E12A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A2660 0019F460*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*801A2664 0019F464*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d0, context->r31));
/*801A2668 0019F468*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e0, context->r31));
/*801A266C 0019F46C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*801A2670 0019F470*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d4, context->r31));
/*801A2674 0019F474*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e4, context->r31));
/*801A2678 0019F478*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*801A267C 0019F47C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801A2680, 0x801A2680) //this is a jump label
/*801A2680 0019F480*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801A2684 0019F484*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801A2688 0019F488*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801A268C 0019F48C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801A2690 0019F490*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A2694 0019F494*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*801A2698 0019F498*/ PPC::Runtime::ASM::blr();
}
//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800FB5D0.hpp"
#include "fn_800FB5D0.hpp"
#include "fn_800FB5D0.hpp"
#include "fn_800FB5D0.hpp"
#include "fn_800FB5D0.hpp"
#include "fn_800FB5D0.hpp"
#include "fn_800FB5D0.hpp"
#include "fn_800FB5D0.hpp"
#include "fn_800FB5D0.hpp"
#include "fn_800FB5D0.hpp"
#include "fn_800FB5D0.hpp"
#include "fn_800FB5D0.hpp"
#include "fn_800FB5D0.hpp"
#include "fn_800FB5D0.hpp"
#include "fn_800FB5D0.hpp"
#include "fn_800FB5D0.hpp"
#include "fn_800FB5D0.hpp"
#include "fn_800FB5D0.hpp"
#include "fn_800FBF60.hpp"
#include "fn_800FC2D0.hpp"
#include "fn_800FC2D0.hpp"
#include "fn_800FCD44.hpp"
#include "fn_800FA708.hpp"
#include "fn_800FA708.hpp"



void fn_8010E5DC(PPC::Runtime::GCContext* context)
{
/*8010E5DC 0010B3DC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8010E5E0 0010B3E0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8010E5E4 0010B3E4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8010E5E8 0010B3E8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8010E5EC 0010B3EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010E5F0 0010B3F0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8010E5F4 0010B3F4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8010E5F8 0010B3F8*/ PPC::Runtime::ASM::bl(fn_800FB5D0);
/*8010E5FC 0010B3FC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010E600 0010B400*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8010E604 0010B404*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8010E608 0010B408*/ PPC::Runtime::ASM::bl(fn_800FB5D0);
/*8010E60C 0010B40C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010E610 0010B410*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8010E614 0010B414*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8010E618 0010B418*/ PPC::Runtime::ASM::bl(fn_800FB5D0);
/*8010E61C 0010B41C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010E620 0010B420*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8010E624 0010B424*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8010E628 0010B428*/ PPC::Runtime::ASM::bl(fn_800FB5D0);
/*8010E62C 0010B42C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010E630 0010B430*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*8010E634 0010B434*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8010E638 0010B438*/ PPC::Runtime::ASM::bl(fn_800FB5D0);
/*8010E63C 0010B43C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010E640 0010B440*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*8010E644 0010B444*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8010E648 0010B448*/ PPC::Runtime::ASM::bl(fn_800FB5D0);
/*8010E64C 0010B44C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010E650 0010B450*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*8010E654 0010B454*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8010E658 0010B458*/ PPC::Runtime::ASM::bl(fn_800FB5D0);
/*8010E65C 0010B45C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010E660 0010B460*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*8010E664 0010B464*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8010E668 0010B468*/ PPC::Runtime::ASM::bl(fn_800FB5D0);
/*8010E66C 0010B46C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010E670 0010B470*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*8010E674 0010B474*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8010E678 0010B478*/ PPC::Runtime::ASM::bl(fn_800FB5D0);
/*8010E67C 0010B47C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010E680 0010B480*/ PPC::Runtime::ASM::li(context->r4, 0x9);
/*8010E684 0010B484*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8010E688 0010B488*/ PPC::Runtime::ASM::bl(fn_800FB5D0);
/*8010E68C 0010B48C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010E690 0010B490*/ PPC::Runtime::ASM::li(context->r4, 0xa);
/*8010E694 0010B494*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8010E698 0010B498*/ PPC::Runtime::ASM::bl(fn_800FB5D0);
/*8010E69C 0010B49C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010E6A0 0010B4A0*/ PPC::Runtime::ASM::li(context->r4, 0xb);
/*8010E6A4 0010B4A4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8010E6A8 0010B4A8*/ PPC::Runtime::ASM::bl(fn_800FB5D0);
/*8010E6AC 0010B4AC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010E6B0 0010B4B0*/ PPC::Runtime::ASM::li(context->r4, 0xc);
/*8010E6B4 0010B4B4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8010E6B8 0010B4B8*/ PPC::Runtime::ASM::bl(fn_800FB5D0);
/*8010E6BC 0010B4BC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010E6C0 0010B4C0*/ PPC::Runtime::ASM::li(context->r4, 0xd);
/*8010E6C4 0010B4C4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8010E6C8 0010B4C8*/ PPC::Runtime::ASM::bl(fn_800FB5D0);
/*8010E6CC 0010B4CC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010E6D0 0010B4D0*/ PPC::Runtime::ASM::li(context->r4, 0xe);
/*8010E6D4 0010B4D4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8010E6D8 0010B4D8*/ PPC::Runtime::ASM::bl(fn_800FB5D0);
/*8010E6DC 0010B4DC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010E6E0 0010B4E0*/ PPC::Runtime::ASM::li(context->r4, 0xf);
/*8010E6E4 0010B4E4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8010E6E8 0010B4E8*/ PPC::Runtime::ASM::bl(fn_800FB5D0);
/*8010E6EC 0010B4EC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010E6F0 0010B4F0*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8010E6F4 0010B4F4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8010E6F8 0010B4F8*/ PPC::Runtime::ASM::bl(fn_800FB5D0);
/*8010E6FC 0010B4FC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010E700 0010B500*/ PPC::Runtime::ASM::li(context->r4, 0x11);
/*8010E704 0010B504*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8010E708 0010B508*/ PPC::Runtime::ASM::bl(fn_800FB5D0);
/*8010E70C 0010B50C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010E710 0010B510*/ PPC::Runtime::ASM::li(context->r4, 0x12);
/*8010E714 0010B514*/ PPC::Runtime::ASM::bl(fn_800FBF60);
/*8010E718 0010B518*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010E71C 0010B51C*/ PPC::Runtime::ASM::li(context->r4, 0x13);
/*8010E720 0010B520*/ PPC::Runtime::ASM::bl(fn_800FC2D0);
/*8010E724 0010B524*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010E728 0010B528*/ PPC::Runtime::ASM::li(context->r4, 0x14);
/*8010E72C 0010B52C*/ PPC::Runtime::ASM::bl(fn_800FC2D0);
/*8010E730 0010B530*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010E734 0010B534*/ PPC::Runtime::ASM::li(context->r4, 0x15);
/*8010E738 0010B538*/ PPC::Runtime::ASM::bl(fn_800FCD44);
/*8010E73C 0010B53C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010E740 0010B540*/ PPC::Runtime::ASM::li(context->r4, 0x16);
/*8010E744 0010B544*/ PPC::Runtime::ASM::bl(fn_800FA708);
/*8010E748 0010B548*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010E74C 0010B54C*/ PPC::Runtime::ASM::li(context->r4, 0x17);
/*8010E750 0010B550*/ PPC::Runtime::ASM::bl(fn_800FA708);
/*8010E754 0010B554*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010E758 0010B558*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8010E75C 0010B55C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8010E760 0010B560*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8010E764 0010B564*/ PPC::Runtime::ASM::blr();
}
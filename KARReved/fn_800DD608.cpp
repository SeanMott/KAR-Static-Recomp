//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800D790C.hpp"
#include "fn_80242B78.hpp"



void fn_800DD608(PPC::Runtime::GCContext* context)
{
/*800DD608 000DA408*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800DD60C 000DA40C*/ PPC::Runtime::ASM::mflr(context->r0);
/*800DD610 000DA410*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800DD614 000DA414*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800DD618 000DA418*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*800DD61C 000DA41C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800DD620 000DA420*/ PPC::Runtime::ASM::mr(context->r30, context->r6);
/*800DD624 000DA424*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*800DD628 000DA428*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800DD62C 000DA42C*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*800DD630 000DA430*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800DD634 000DA434*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*800DD638 000DA438*/ PPC::Runtime::ASM::bl(fn_800D790C);
/*800DD63C 000DA43C*/ PPC::Runtime::ASM::mulli(context->r4, context->r29, 0x140);
/*800DD640 000DA440*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r28));
/*800DD644 000DA444*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800DD648 000DA448*/ PPC::Runtime::ASM::mulli(context->r5, context->r31, 0x24);
/*800DD64C 000DA44C*/ PPC::Runtime::ASM::add(context->r0, context->r6, context->r4);
/*800DD650 000DA450*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r5);
/*800DD654 000DA454*/ PPC::Runtime::ASM::addi(context->r31, context->r4, 0x18);
/*800DD658 000DA458*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r5);
/*800DD65C 000DA45C*/ PPC::Runtime::ASM::add(context->r31, context->r6, context->r31);
/*800DD660 000DA460*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*800DD664 000DA464*/ PPC::Runtime::ASM::mr(context->r5, context->r31);
/*800DD668 000DA468*/ PPC::Runtime::ASM::bl(fn_80242B78);
/*800DD66C 000DA46C*/ PPC::Runtime::ASM::fneg(context->f2, context->f1);
/*800DD670 000DA470*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800DD674 000DA474*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800DD678 000DA478*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f2, context->f0);
/*800DD67C 000DA47C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800DD680 000DA480*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800DD684 000DA484*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*800DD688 000DA488*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f2, context->f0);
/*800DD68C 000DA48C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*800DD690 000DA490*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800DD694 000DA494*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*800DD698 000DA498*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f2, context->f0);
/*800DD69C 000DA49C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*800DD6A0 000DA4A0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800DD6A4 000DA4A4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800DD6A8 000DA4A8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800DD6AC 000DA4AC*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800DD6B0 000DA4B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800DD6B4 000DA4B4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800DD6B8 000DA4B8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800DD6BC 000DA4BC*/ PPC::Runtime::ASM::blr();
}
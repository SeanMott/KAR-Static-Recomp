//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138934.hpp"
#include "fn_801594EC.hpp"
#include "fn_801594EC.hpp"
#include "fn_80138A00.hpp"
#include "fn_80138AC8.hpp"



void fn_80159604(PPC::Runtime::GCContext* context)
{
/*80159604 00156404*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80159608 00156408*/ PPC::Runtime::ASM::mflr(context->r0);
/*8015960C 0015640C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80159610 00156410*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80159614 00156414*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80159618 00156418*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8015961C 0015641C*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80159620 00156420*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*80159624 00156424*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80159628 00156428*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x784);
/*8015962C 0015642C*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*80159630 00156430*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x784, context->r3));
/*80159634 00156434*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80159638 00156438*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8015963C 0015643C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80159640 00156440*/ PPC::Runtime::ASM::bl(fn_80138934);
/*80159644 00156444*/ PPC::Runtime::ASM::lis(context->r4, fn_801594EC @ Get_MemoryOffset_HighBit);
/*80159648 00156448*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8015964C 0015644C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_801594EC @ Get_MemoryOffset_LowBit);
/*80159650 00156450*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80159654 00156454*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*80159658 00156458*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8015965C 0015645C*/ PPC::Runtime::ASM::li(context->r4, 0xc2);
/*80159660 00156460*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*80159664 00156464*/ PPC::Runtime::ASM::extsb(context->r31, context->r28);
/*80159668 00156468*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8015966C 0015646C*/ PPC::Runtime::ASM::add(context->r4, context->r3, context->r31);
/*80159670 00156470*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80159674 00156474*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r4));
/*80159678 00156478*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8015967C 0015647C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11, context->r4));
/*80159680 00156480*/ PPC::Runtime::ASM::bl(fn_80138AC8);
/*80159684 00156484*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 2);
/*80159688 00156488*/ PPC::Runtime::ASM::add(context->r3, context->r30, context->r0);
/*8015968C 0015648C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80159690 00156490*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80159694 00156494*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80159698 00156498*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8015969C 0015649C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801596A0 001564A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801596A4 001564A4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801596A8 001564A8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801596AC 001564AC*/ PPC::Runtime::ASM::blr();
}
//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138934.hpp"
#include "fn_80158470.hpp"
#include "fn_80158470.hpp"
#include "fn_80138A00.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_80138B10.hpp"
#include "fn_80138AC8.hpp"



void fn_80158588(PPC::Runtime::GCContext* context)
{
/*80158588 00155388*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8015858C 0015538C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80158590 00155390*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80158594 00155394*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80158598 00155398*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*8015859C 0015539C*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*801585A0 001553A0*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801585A4 001553A4*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x734);
/*801585A8 001553A8*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*801585AC 001553AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x734, context->r3));
/*801585B0 001553B0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801585B4 001553B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801585B8 001553B8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801585BC 001553BC*/ PPC::Runtime::ASM::bl(fn_80138934);
/*801585C0 001553C0*/ PPC::Runtime::ASM::lis(context->r4, fn_80158470 @ Get_MemoryOffset_HighBit);
/*801585C4 001553C4*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*801585C8 001553C8*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*801585CC 001553CC*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*801585D0 001553D0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80158470 @ Get_MemoryOffset_LowBit);
/*801585D4 001553D4*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*801585D8 001553D8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801585DC 001553DC*/ PPC::Runtime::ASM::li(context->r4, 0x3a);
/*801585E0 001553E0*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*801585E4 001553E4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801585E8 001553E8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801585EC 001553EC*/ PPC::Runtime::ASM::stb(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*801585F0 001553F0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801585F4 001553F4*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*801585F8 001553F8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r31));
/*801585FC 001553FC*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80158600 00155400*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*80158604 00155404*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80158608 00155408*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*8015860C 0015540C*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80158610 00155410*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80158614 00155414*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80158618 00155418*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0800 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8015861C 0015541C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80158620 00155420*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r31));
/*80158624 00155424*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80158628 00155428*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0804 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8015862C 0015542C*/ PPC::Runtime::ASM::extsb(context->r4, context->r4);
/*80158630 00155430*/ PPC::Runtime::ASM::bl(fn_80138B10);
/*80158634 00155434*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80158638 00155438*/ PPC::Runtime::ASM::bl(fn_80138AC8);
/*8015863C 0015543C*/ PPC::Runtime::ASM::extsb(context->r0, context->r27);
/*80158640 00155440*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80158644 00155444*/ PPC::Runtime::ASM::add(context->r3, context->r30, context->r0);
/*80158648 00155448*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8015864C 0015544C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80158650 00155450*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*80158654 00155454*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80158658 00155458*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8015865C 0015545C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80158660 00155460*/ PPC::Runtime::ASM::blr();
}
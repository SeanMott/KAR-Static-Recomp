//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_GObj_Create.hpp"
#include "fn_HSD_CObjLoadDesc.hpp"
#include "fn_GObj_AddObject.hpp"
#include "fn_80440718.hpp"
#include "fn_80440718.hpp"
#include "fn_80429728.hpp"
#include "fn_80439D48.hpp"
#include "fn_80439D48.hpp"
#include "fn_804397B4.hpp"
#include "fn_80439D14.hpp"



void fn_80440744(PPC::Runtime::GCContext* context)
{
/*80440744 0043D544*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80440748 0043D548*/ PPC::Runtime::ASM::mflr(context->r0);
/*8044074C 0043D54C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80440750 0043D550*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80440754 0043D554*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80440758 0043D558*/ PPC::Runtime::ASM::mr(context->r30, context->r6);
/*8044075C 0043D55C*/ PPC::Runtime::ASM::bl(fn_GObj_Create);
/* 80440760 0043D560  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*80440764 0043D564*/ PPC::Runtime::ASM::bne(.L_80440770);
/*80440768 0043D568*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8044076C 0043D56C*/ PPC::Runtime::ASM::b(.L_804407C0);
RUNTIME_PPC_JUMP_LABEL(.L_80440770, 0x80440770) //this is a jump label
/*80440770 0043D570*/ PPC::Runtime::ASM::lis(context->r3, lbl_805089A8 @ Get_MemoryOffset_HighBit);
/*80440774 0043D574*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_805089A8 @ Get_MemoryOffset_LowBit);
/*80440778 0043D578*/ PPC::Runtime::ASM::bl(fn_HSD_CObjLoadDesc);
/*8044077C 0043D57C*/ PPC::Runtime::ASM::lbz(context->r4, SkipAddress_28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80440780 0043D580*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80440784 0043D584*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80440788 0043D588*/ PPC::Runtime::ASM::bl(fn_GObj_AddObject);
/*8044078C 0043D58C*/ PPC::Runtime::ASM::lis(context->r4, fn_80440718 @ Get_MemoryOffset_HighBit);
/*80440790 0043D590*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80440794 0043D594*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80440718 @ Get_MemoryOffset_LowBit);
/*80440798 0043D598*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*8044079C 0043D59C*/ PPC::Runtime::ASM::bl(fn_80429728);
/*804407A0 0043D5A0*/ PPC::Runtime::ASM::lis(context->r3, fn_80439D48 @ Get_MemoryOffset_HighBit);
/*804407A4 0043D5A4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, fn_80439D48 @ Get_MemoryOffset_LowBit);
/*804407A8 0043D5A8*/ PPC::Runtime::ASM::bl(fn_804397B4);
/*804407AC 0043D5AC*/ PPC::Runtime::ASM::li(context->r3, 0x4);
/*804407B0 0043D5B0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*804407B4 0043D5B4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*804407B8 0043D5B8*/ PPC::Runtime::ASM::bl(fn_80439D14);
/*804407BC 0043D5BC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
RUNTIME_PPC_JUMP_LABEL(.L_804407C0, 0x804407C0) //this is a jump label
/*804407C0 0043D5C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804407C4 0043D5C4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*804407C8 0043D5C8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*804407CC 0043D5CC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*804407D0 0043D5D0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*804407D4 0043D5D4*/ PPC::Runtime::ASM::blr();
}
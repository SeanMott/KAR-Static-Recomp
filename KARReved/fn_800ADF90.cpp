//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800ABA6C.hpp"
#include "fn_playSoundFX_menuSound.hpp"
#include "fn_debug_openSubMenu.hpp"
#include "fn_800ABA6C.hpp"
#include "fn_800AD410.hpp"
#include "fn_800AD410.hpp"
#include "fn_800ABA74.hpp"



void fn_800ADF90(PPC::Runtime::GCContext* context)
{
/*800ADF90 000AAD90*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800ADF94 000AAD94*/ PPC::Runtime::ASM::mflr(context->r0);
/*800ADF98 000AAD98*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*800ADF9C 000AAD9C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800ADFA0 000AADA0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800ADFA4 000AADA4*/ PPC::Runtime::ASM::bne(.L_800ADFDC);
/*800ADFA8 000AADA8*/ PPC::Runtime::ASM::bl(fn_800ABA6C);
/*800ADFAC 000AADAC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800ADFB0 000AADB0*/ PPC::Runtime::ASM::bl(fn_playSoundFX_menuSound);
/*800ADFB4 000AADB4*/ PPC::Runtime::ASM::lis(context->r4, StructValues_String_5_PlayerKind_CPU_DemoX_And_BossX_AndMicStructs @ Get_MemoryOffset_HighBit);
/*800ADFB8 000AADB8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800ADFBC 000AADBC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, StructValues_String_5_PlayerKind_CPU_DemoX_And_BossX_AndMicStructs @ Get_MemoryOffset_LowBit);
/*800ADFC0 000AADC0*/ PPC::Runtime::ASM::li(context->r5, -0x3c);
/*800ADFC4 000AADC4*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*800ADFC8 000AADC8*/ PPC::Runtime::ASM::bl(fn_debug_openSubMenu);
/*800ADFCC 000AADCC*/ PPC::Runtime::ASM::bl(fn_800ABA6C);
/*800ADFD0 000AADD0*/ PPC::Runtime::ASM::lis(context->r4, fn_800AD410 @ Get_MemoryOffset_HighBit);
/*800ADFD4 000AADD4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_800AD410 @ Get_MemoryOffset_LowBit);
/*800ADFD8 000AADD8*/ PPC::Runtime::ASM::bl(fn_800ABA74);
RUNTIME_PPC_JUMP_LABEL(.L_800ADFDC, 0x800ADFDC) //this is a jump label
/*800ADFDC 000AADDC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800ADFE0 000AADE0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800ADFE4 000AADE4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800ADFE8 000AADE8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800ADFEC 000AADEC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800ADFF0 000AADF0*/ PPC::Runtime::ASM::blr();
}
//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_8011245C.hpp"
#include "fn_getPlayerCount.hpp"
#include "fn_80059520.hpp"
#include "fn_80059520.hpp"
#include "fn_80059520.hpp"



void fn_8012EE4C(PPC::Runtime::GCContext* context)
{
/*8012EE4C 0012BC4C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8012EE50 0012BC50*/ PPC::Runtime::ASM::mflr(context->r0);
/*8012EE54 0012BC54*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_1123 @ Get_MemoryOffset_HighBit);
/*8012EE58 0012BC58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8012EE5C 0012BC5C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8012EE60 0012BC60*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8012EE64 0012BC64*/ PPC::Runtime::ASM::addi(context->r30, context->r3, MemoryOffset_1123 @ Get_MemoryOffset_LowBit);
/*8012EE68 0012BC68*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8012EE6C 0012BC6C*/ PPC::Runtime::ASM::bl(fn_80112044);
/*8012EE70 0012BC70*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0xcf8);
/*8012EE74 0012BC74*/ PPC::Runtime::ASM::bl(fn_8011245C);
/*8012EE78 0012BC78*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8012EE7C 0012BC7C*/ PPC::Runtime::ASM::bl(fn_getPlayerCount);
/*8012EE80 0012BC80*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8012EE84 0012BC84*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8012EE88 0012BC88*/ PPC::Runtime::ASM::beq(.L_8012EEB8);
/*8012EE8C 0012BC8C*/ PPC::Runtime::ASM::bge(.L_8012EED4);
/*8012EE90 0012BC90*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8012EE94 0012BC94*/ PPC::Runtime::ASM::bge(.L_8012EE9C);
/*8012EE98 0012BC98*/ PPC::Runtime::ASM::b(.L_8012EED4);
RUNTIME_PPC_JUMP_LABEL(.L_8012EE9C, 0x8012EE9C) //this is a jump label
/*8012EE9C 0012BC9C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8012EEA0 0012BCA0*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*8012EEA4 0012BCA4*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x0);
/*8012EEA8 0012BCA8*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8012EEAC 0012BCAC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8012EEB0 0012BCB0*/ PPC::Runtime::ASM::bl(fn_80059520);
/*8012EEB4 0012BCB4*/ PPC::Runtime::ASM::b(.L_8012EEEC);
RUNTIME_PPC_JUMP_LABEL(.L_8012EEB8, 0x8012EEB8) //this is a jump label
/*8012EEB8 0012BCB8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8012EEBC 0012BCBC*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*8012EEC0 0012BCC0*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x1c);
/*8012EEC4 0012BCC4*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8012EEC8 0012BCC8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8012EECC 0012BCCC*/ PPC::Runtime::ASM::bl(fn_80059520);
/*8012EED0 0012BCD0*/ PPC::Runtime::ASM::b(.L_8012EEEC);
RUNTIME_PPC_JUMP_LABEL(.L_8012EED4, 0x8012EED4) //this is a jump label
/*8012EED4 0012BCD4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8012EED8 0012BCD8*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*8012EEDC 0012BCDC*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x38);
/*8012EEE0 0012BCE0*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8012EEE4 0012BCE4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8012EEE8 0012BCE8*/ PPC::Runtime::ASM::bl(fn_80059520);
RUNTIME_PPC_JUMP_LABEL(.L_8012EEEC, 0x8012EEEC) //this is a jump label
/*8012EEEC 0012BCEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8012EEF0 0012BCF0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8012EEF4 0012BCF4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8012EEF8 0012BCF8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8012EEFC 0012BCFC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8012EF00 0012BD00*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8012EF04 0012BD04*/ PPC::Runtime::ASM::blr();
}
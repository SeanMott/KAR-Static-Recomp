//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803DA558.hpp"
#include "fn_HSD_Free.hpp"
#include "fn_8045EA50.hpp"



void fn_8045DE54(PPC::Runtime::GCContext* context)
{
/*8045DE54 0045AC54*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8045DE58 0045AC58*/ PPC::Runtime::ASM::mflr(context->r0);
/*8045DE5C 0045AC5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8045DE60 0045AC60*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8045DE64 0045AC64*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE588 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8045DE68 0045AC68*/ PPC::Runtime::ASM::b(.L_8045DF14);
RUNTIME_PPC_JUMP_LABEL(.L_8045DE6C, 0x8045DE6C) //this is a jump label
/*8045DE6C 0045AC6C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8045DE70 0045AC70*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8045DE74 0045AC74*/ PPC::Runtime::ASM::beq(.L_8045DF10);
/*8045DE78 0045AC78*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x78);
/*8045DE7C 0045AC7C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8045DE80 0045AC80*/ PPC::Runtime::ASM::bl(fn_803DA558);
/*8045DE84 0045AC84*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE588 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8045DE88 0045AC88*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8045DE8C 0045AC8C*/ PPC::Runtime::ASM::beq(.L_8045DF04);
/*8045DE90 0045AC90*/ PPC::Runtime::ASM::b(.L_8045DEFC);
RUNTIME_PPC_JUMP_LABEL(.L_8045DE94, 0x8045DE94) //this is a jump label
/*8045DE94 0045AC94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8045DE98 0045AC98*/ PPC::Runtime::ASM::cmplw(context->r31, context->r0);
/*8045DE9C 0045AC9C*/ PPC::Runtime::ASM::bne(.L_8045DEF8);
/*8045DEA0 0045ACA0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8045DEA4 0045ACA4*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8045DEA8 0045ACA8*/ PPC::Runtime::ASM::beq(.L_8045DEB4);
/*8045DEAC 0045ACAC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8045DEB0 0045ACB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_8045DEB4, 0x8045DEB4) //this is a jump label
/*8045DEB4 0045ACB4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8045DEB8 0045ACB8*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8045DEBC 0045ACBC*/ PPC::Runtime::ASM::beq(.L_8045DEC8);
/*8045DEC0 0045ACC0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8045DEC4 0045ACC4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_8045DEC8, 0x8045DEC8) //this is a jump label
/*8045DEC8 0045ACC8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8045DECC 0045ACCC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8045DED0 0045ACD0*/ PPC::Runtime::ASM::bne(.L_8045DEF0);
/*8045DED4 0045ACD4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8045DED8 0045ACD8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8045DEDC 0045ACDC*/ PPC::Runtime::ASM::bne(.L_8045DEEC);
/*8045DEE0 0045ACE0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8045DEE4 0045ACE4*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE588 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8045DEE8 0045ACE8*/ PPC::Runtime::ASM::b(.L_8045DEF0);
RUNTIME_PPC_JUMP_LABEL(.L_8045DEEC, 0x8045DEEC) //this is a jump label
/*8045DEEC 0045ACEC*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE588 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8045DEF0, 0x8045DEF0) //this is a jump label
/*8045DEF0 0045ACF0*/ PPC::Runtime::ASM::bl(fn_HSD_Free);
/*8045DEF4 0045ACF4*/ PPC::Runtime::ASM::b(.L_8045DF04);
RUNTIME_PPC_JUMP_LABEL(.L_8045DEF8, 0x8045DEF8) //this is a jump label
/*8045DEF8 0045ACF8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8045DEFC, 0x8045DEFC) //this is a jump label
/*8045DEFC 0045ACFC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8045DF00 0045AD00*/ PPC::Runtime::ASM::bne(.L_8045DE94);
RUNTIME_PPC_JUMP_LABEL(.L_8045DF04, 0x8045DF04) //this is a jump label
/*8045DF04 0045AD04*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8045DF08 0045AD08*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*8045DF0C 0045AD0C*/ PPC::Runtime::ASM::bl(fn_8045EA50);
RUNTIME_PPC_JUMP_LABEL(.L_8045DF10, 0x8045DF10) //this is a jump label
/*8045DF10 0045AD10*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE588 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8045DF14, 0x8045DF14) //this is a jump label
/*8045DF14 0045AD14*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8045DF18 0045AD18*/ PPC::Runtime::ASM::bne(.L_8045DE6C);
/*8045DF1C 0045AD1C*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*8045DF20 0045AD20*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE58C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8045DF24 0045AD24*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8045DF28 0045AD28*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8045DF2C 0045AD2C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8045DF30 0045AD30*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8045DF34 0045AD34*/ PPC::Runtime::ASM::blr();
}
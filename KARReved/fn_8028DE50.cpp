//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80296488.hpp"



void fn_8028DE50(PPC::Runtime::GCContext* context)
{
/*8028DE50 0028AC50*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8028DE54 0028AC54*/ PPC::Runtime::ASM::mflr(context->r0);
/*8028DE58 0028AC58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8028DE5C 0028AC5C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8028DE60 0028AC60*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8028DE64 0028AC64*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*8028DE68 0028AC68*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/* 8028DE6C 0028AC6C  7C 7D 1B 79 */ mr. context->r29 , context->r3
/*8028DE70 0028AC70*/ PPC::Runtime::ASM::beq(.L_8028DF20);
/*8028DE74 0028AC74*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BD5F0 @ Get_MemoryOffset_HighBit);
/*8028DE78 0028AC78*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BD5F0 @ Get_MemoryOffset_LowBit);
/*8028DE7C 0028AC7C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8028DE80 0028AC80*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDC20 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/* 8028DE84 0028AC84  34 03 FF FF */ subic. context->r0 , context->r3 , 0x1
/*8028DE88 0028AC88*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDC20 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8028DE8C 0028AC8C*/ PPC::Runtime::ASM::bne(.L_8028DEC0);
/*8028DE90 0028AC90*/ PPC::Runtime::ASM::lwz(context->r31, STRUCT_BYTE4_COUNT_1805DDC24 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8028DE94 0028AC94*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8028DE98 0028AC98*/ PPC::Runtime::ASM::beq(.L_8028DEC0);
/*8028DE9C 0028AC9C*/ PPC::Runtime::ASM::beq(.L_8028DEB8);
/*8028DEA0 0028ACA0*/ PPC::Runtime::ASM::beq(.L_8028DEB8);
/*8028DEA4 0028ACA4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8028DEA8 0028ACA8*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8028DEAC 0028ACAC*/ PPC::Runtime::ASM::beq(.L_8028DEB8);
/*8028DEB0 0028ACB0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8028DEB4 0028ACB4*/ PPC::Runtime::ASM::bl(fn_80296488);
RUNTIME_PPC_JUMP_LABEL(.L_8028DEB8, 0x8028DEB8) //this is a jump label
/*8028DEB8 0028ACB8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8028DEBC 0028ACBC*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8028DEC0, 0x8028DEC0) //this is a jump label
/*8028DEC0 0028ACC0*/ PPC::Runtime::ASM::addic.(context->r0, context->r29, 0x10);
/*8028DEC4 0028ACC4*/ PPC::Runtime::ASM::beq(.L_8028DEE8);
/*8028DEC8 0028ACC8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*8028DECC 0028ACCC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8028DED0 0028ACD0*/ PPC::Runtime::ASM::beq(.L_8028DEE8);
/*8028DED4 0028ACD4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8028DED8 0028ACD8*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8028DEDC 0028ACDC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8028DEE0 0028ACE0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028DEE4 0028ACE4*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028DEE8, 0x8028DEE8) //this is a jump label
/*8028DEE8 0028ACE8*/ PPC::Runtime::ASM::addic.(context->r0, context->r29, 0xc);
/*8028DEEC 0028ACEC*/ PPC::Runtime::ASM::beq(.L_8028DF10);
/*8028DEF0 0028ACF0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*8028DEF4 0028ACF4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8028DEF8 0028ACF8*/ PPC::Runtime::ASM::beq(.L_8028DF10);
/*8028DEFC 0028ACFC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8028DF00 0028AD00*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8028DF04 0028AD04*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8028DF08 0028AD08*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028DF0C 0028AD0C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028DF10, 0x8028DF10) //this is a jump label
/*8028DF10 0028AD10*/ PPC::Runtime::ASM::extsh.(context->r0, context->r30);
/*8028DF14 0028AD14*/ PPC::Runtime::ASM::ble(.L_8028DF20);
/*8028DF18 0028AD18*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8028DF1C 0028AD1C*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8028DF20, 0x8028DF20) //this is a jump label
/*8028DF20 0028AD20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8028DF24 0028AD24*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8028DF28 0028AD28*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8028DF2C 0028AD2C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8028DF30 0028AD30*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028DF34 0028AD34*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8028DF38 0028AD38*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8028DF3C 0028AD3C*/ PPC::Runtime::ASM::blr();
}
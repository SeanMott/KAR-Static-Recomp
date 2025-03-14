//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_ShadowDeleteObject.hpp"
#include "fn_HSD_MObjDeleteShadowTexture.hpp"
#include "fn_HSD_Free.hpp"
#include "fn_HSD_ImageDescFree.hpp"
#include "fn_HSD_TObjFree.hpp"
#include "fn_HSD_ObjFree.hpp"



void fn_HSD_ShadowFree(PPC::Runtime::GCContext* context)
{
/*8041D054 00419E54*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8041D058 00419E58*/ PPC::Runtime::ASM::mflr(context->r0);
/*8041D05C 00419E5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8041D060 00419E60*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 8041D064 00419E64  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*8041D068 00419E68*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8041D06C 00419E6C*/ PPC::Runtime::ASM::beq(.L_8041D144);
/*8041D070 00419E70*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8041D074 00419E74*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8041D078 00419E78*/ PPC::Runtime::ASM::beq(.L_8041D0E8);
/*8041D07C 00419E7C*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*8041D080 00419E80*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8041D084 00419E84*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8041D088 00419E88*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 16);
/*8041D08C 00419E8C*/ PPC::Runtime::ASM::subf(context->r0, context->r4, context->r0);
/*8041D090 00419E90*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r0);
/* 8041D094 00419E94  54 00 D9 7F */ srwi. context->r0 , context->r0 , 5
/*8041D098 00419E98*/ PPC::Runtime::ASM::beq(.L_8041D0A0);
/*8041D09C 00419E9C*/ PPC::Runtime::ASM::b(.L_8041D0B0);
RUNTIME_PPC_JUMP_LABEL(.L_8041D0A0, 0x8041D0A0) //this is a jump label
/*8041D0A0 00419EA0*/ PPC::Runtime::ASM::subi(context->r3, context->r4, 0x1);
/*8041D0A4 00419EA4*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r4);
/*8041D0A8 00419EA8*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8041D0AC 00419EAC*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 5);
RUNTIME_PPC_JUMP_LABEL(.L_8041D0B0, 0x8041D0B0) //this is a jump label
/*8041D0B0 00419EB0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8041D0B4 00419EB4*/ PPC::Runtime::ASM::beq(.L_8041D0E8);
/*8041D0B8 00419EB8*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8041D0BC 00419EBC*/ PPC::Runtime::ASM::beq(.L_8041D0E8);
/*8041D0C0 00419EC0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8041D0C4 00419EC4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8041D0C8 00419EC8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r4));
/*8041D0CC 00419ECC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8041D0D0 00419ED0*/ PPC::Runtime::ASM::bctrl();
/*8041D0D4 00419ED4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8041D0D8 00419ED8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8041D0DC 00419EDC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r4));
/*8041D0E0 00419EE0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8041D0E4 00419EE4*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8041D0E8, 0x8041D0E8) //this is a jump label
/*8041D0E8 00419EE8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8041D0EC 00419EEC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8041D0F0 00419EF0*/ PPC::Runtime::ASM::bl(fn_HSD_ShadowDeleteObject);
/*8041D0F4 00419EF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*8041D0F8 00419EF8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8041D0FC 00419EFC*/ PPC::Runtime::ASM::beq(.L_8041D108);
/*8041D100 00419F00*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8041D104 00419F04*/ PPC::Runtime::ASM::bl(fn_HSD_MObjDeleteShadowTexture);
RUNTIME_PPC_JUMP_LABEL(.L_8041D108, 0x8041D108) //this is a jump label
/*8041D108 00419F08*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8041D10C 00419F0C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r3));
/*8041D110 00419F10*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8041D114 00419F14*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8041D118 00419F18*/ PPC::Runtime::ASM::beq(.L_8041D120);
/*8041D11C 00419F1C*/ PPC::Runtime::ASM::bl(fn_HSD_Free);
RUNTIME_PPC_JUMP_LABEL(.L_8041D120, 0x8041D120) //this is a jump label
/*8041D120 00419F20*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8041D124 00419F24*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r30));
/*8041D128 00419F28*/ PPC::Runtime::ASM::bl(fn_HSD_ImageDescFree);
/*8041D12C 00419F2C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8041D130 00419F30*/ PPC::Runtime::ASM::bl(fn_HSD_TObjFree);
/*8041D134 00419F34*/ PPC::Runtime::ASM::lis(context->r3, shadow_alloc_data @ Get_MemoryOffset_HighBit);
/*8041D138 00419F38*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8041D13C 00419F3C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, shadow_alloc_data @ Get_MemoryOffset_LowBit);
/*8041D140 00419F40*/ PPC::Runtime::ASM::bl(fn_HSD_ObjFree);
RUNTIME_PPC_JUMP_LABEL(.L_8041D144, 0x8041D144) //this is a jump label
/*8041D144 00419F44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8041D148 00419F48*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8041D14C 00419F4C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8041D150 00419F50*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8041D154 00419F54*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8041D158 00419F58*/ PPC::Runtime::ASM::blr();
}
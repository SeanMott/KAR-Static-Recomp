//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8028B0D0.hpp"
#include "fn_8028B0D0.hpp"



void fn_802941F8(PPC::Runtime::GCContext* context)
{
/*802941F8 00290FF8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802941FC 00290FFC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80294200 00291000*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80294204 00291004*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80294208 00291008*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8029420C 0029100C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 80294210 00291010  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*80294214 00291014*/ PPC::Runtime::ASM::beq(.L_802942A0);
/*80294218 00291018*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE050 @ Get_MemoryOffset_HighBit);
/*8029421C 0029101C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x4);
/*80294220 00291020*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BE050 @ Get_MemoryOffset_LowBit);
/*80294224 00291024*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80294228 00291028*/ PPC::Runtime::ASM::beq(.L_80294274);
/*8029422C 0029102C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE028 @ Get_MemoryOffset_HighBit);
/*80294230 00291030*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BE028 @ Get_MemoryOffset_LowBit);
/*80294234 00291034*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80294238 00291038*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8029423C 0029103C*/ PPC::Runtime::ASM::bl(fn_HSD_TObjRemoveAll);
/*80294240 00291040*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80294244 00291044*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x24);
/*80294248 00291048*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8029424C 0029104C*/ PPC::Runtime::ASM::bl(fn_8028B0D0);
/*80294250 00291050*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xc);
/*80294254 00291054*/ PPC::Runtime::ASM::bl(fn_8028B0D0);
/*80294258 00291058*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x4);
/*8029425C 0029105C*/ PPC::Runtime::ASM::beq(.L_80294274);
/*80294260 00291060*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE000 @ Get_MemoryOffset_HighBit);
/*80294264 00291064*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80294268 00291068*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BE000 @ Get_MemoryOffset_LowBit);
/*8029426C 0029106C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80294270 00291070*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDBD8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80294274, 0x80294274) //this is a jump label
/*80294274 00291074*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80294278 00291078*/ PPC::Runtime::ASM::beq(.L_80294290);
/*8029427C 0029107C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDFD8 @ Get_MemoryOffset_HighBit);
/*80294280 00291080*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80294284 00291084*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BDFD8 @ Get_MemoryOffset_LowBit);
/*80294288 00291088*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8029428C 0029108C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDBD0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80294290, 0x80294290) //this is a jump label
/*80294290 00291090*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*80294294 00291094*/ PPC::Runtime::ASM::ble(.L_802942A0);
/*80294298 00291098*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8029429C 0029109C*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802942A0, 0x802942A0) //this is a jump label
/*802942A0 002910A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802942A4 002910A4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802942A8 002910A8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802942AC 002910AC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802942B0 002910B0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802942B4 002910B4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802942B8 002910B8*/ PPC::Runtime::ASM::blr();
}
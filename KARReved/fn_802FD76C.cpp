//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803792B8.hpp"
#include "fn_802EFFB8.hpp"



void fn_802FD76C(PPC::Runtime::GCContext* context)
{
/*802FD76C 002FA56C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802FD770 002FA570*/ PPC::Runtime::ASM::mflr(context->r0);
/*802FD774 002FA574*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802FD778 002FA578*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802FD77C 002FA57C*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802FD780 002FA580*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802FD784 002FA584  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802FD788 002FA588*/ PPC::Runtime::ASM::beq(.L_802FD8C4);
/*802FD78C 002FA58C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D9CBC @ Get_MemoryOffset_HighBit);
/*802FD790 002FA590*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3AD0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FD794 002FA594*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804D9CBC @ Get_MemoryOffset_LowBit);
/*802FD798 002FA598*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x40);
/*802FD79C 002FA59C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802FD7A0 002FA5A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802FD7A4 002FA5A4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*802FD7A8 002FA5A8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*802FD7AC 002FA5AC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*802FD7B0 002FA5B0*/ PPC::Runtime::ASM::beq(.L_802FD7FC);
/*802FD7B4 002FA5B4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE104 @ Get_MemoryOffset_HighBit);
/*802FD7B8 002FA5B8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BE104 @ Get_MemoryOffset_LowBit);
/*802FD7BC 002FA5BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r30));
/*802FD7C0 002FA5C0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r30));
/*802FD7C4 002FA5C4*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*802FD7C8 002FA5C8*/ PPC::Runtime::ASM::beq(.L_802FD7D4);
/*802FD7CC 002FA5CC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDC70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FD7D0 002FA5D0*/ PPC::Runtime::ASM::bl(fn_803792B8);
RUNTIME_PPC_JUMP_LABEL(.L_802FD7D4, 0x802FD7D4) //this is a jump label
/*802FD7D4 002FA5D4*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x40);
/*802FD7D8 002FA5D8*/ PPC::Runtime::ASM::beq(.L_802FD7FC);
/*802FD7DC 002FA5DC*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE0C4 @ Get_MemoryOffset_HighBit);
/*802FD7E0 002FA5E0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x40);
/*802FD7E4 002FA5E4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE0C4 @ Get_MemoryOffset_LowBit);
/*802FD7E8 002FA5E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r30));
/*802FD7EC 002FA5EC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r30));
/*802FD7F0 002FA5F0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*802FD7F4 002FA5F4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802FD7F8 002FA5F8*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802FD7FC, 0x802FD7FC) //this is a jump label
/*802FD7FC 002FA5FC*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802FD800 002FA600*/ PPC::Runtime::ASM::beq(.L_802FD8B4);
/*802FD804 002FA604*/ PPC::Runtime::ASM::lis(context->r3, lbl_804DA158 @ Get_MemoryOffset_HighBit);
/*802FD808 002FA608*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804DA158 @ Get_MemoryOffset_LowBit);
/*802FD80C 002FA60C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802FD810 002FA610*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802FD814 002FA614*/ PPC::Runtime::ASM::lwzu(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f8, context->r3));
/*802FD818 002FA618*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*802FD81C 002FA61C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802FD820 002FA620*/ PPC::Runtime::ASM::bctrl();
/*802FD824 002FA624*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802FD828 002FA628*/ PPC::Runtime::ASM::beq(.L_802FD874);
/*802FD82C 002FA62C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F54B8 @ Get_MemoryOffset_HighBit);
/*802FD830 002FA630*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802FD834 002FA634*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F54B8 @ Get_MemoryOffset_LowBit);
/*802FD838 002FA638*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802FD83C 002FA63C*/ PPC::Runtime::ASM::beq(.L_802FD874);
/*802FD840 002FA640*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BD6A0 @ Get_MemoryOffset_HighBit);
/*802FD844 002FA644*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802FD848 002FA648*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BD6A0 @ Get_MemoryOffset_LowBit);
/*802FD84C 002FA64C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802FD850 002FA650*/ PPC::Runtime::ASM::beq(.L_802FD874);
/*802FD854 002FA654*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BD658 @ Get_MemoryOffset_HighBit);
/*802FD858 002FA658*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8);
/*802FD85C 002FA65C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BD658 @ Get_MemoryOffset_LowBit);
/*802FD860 002FA660*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802FD864 002FA664*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802FD868 002FA668*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*802FD86C 002FA66C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802FD870 002FA670*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802FD874, 0x802FD874) //this is a jump label
/*802FD874 002FA674*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802FD878 002FA678*/ PPC::Runtime::ASM::beq(.L_802FD8B4);
/*802FD87C 002FA67C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804D6F5C @ Get_MemoryOffset_HighBit);
/*802FD880 002FA680*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D8F18 @ Get_MemoryOffset_HighBit);
/*802FD884 002FA684*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804D6F5C @ Get_MemoryOffset_LowBit);
/*802FD888 002FA688*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802FD88C 002FA68C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802FD890 002FA690*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804D8F18 @ Get_MemoryOffset_LowBit);
/*802FD894 002FA694*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802FD898 002FA698*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4ac, context->r3));
/*802FD89C 002FA69C*/ PPC::Runtime::ASM::bl(fn_802EFFB8);
/*802FD8A0 002FA6A0*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802FD8A4 002FA6A4*/ PPC::Runtime::ASM::beq(.L_802FD8B4);
/*802FD8A8 002FA6A8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D1A98 @ Get_MemoryOffset_HighBit);
/*802FD8AC 002FA6AC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804D1A98 @ Get_MemoryOffset_LowBit);
/*802FD8B0 002FA6B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802FD8B4, 0x802FD8B4) //this is a jump label
/*802FD8B4 002FA6B4*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802FD8B8 002FA6B8*/ PPC::Runtime::ASM::ble(.L_802FD8C4);
/*802FD8BC 002FA6BC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802FD8C0 002FA6C0*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802FD8C4, 0x802FD8C4) //this is a jump label
/*802FD8C4 002FA6C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802FD8C8 002FA6C8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802FD8CC 002FA6CC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802FD8D0 002FA6D0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802FD8D4 002FA6D4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802FD8D8 002FA6D8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802FD8DC 002FA6DC*/ PPC::Runtime::ASM::blr();
}
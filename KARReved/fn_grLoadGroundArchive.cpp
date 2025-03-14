//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_lbLoadArchive.hpp"
#include "fn_lbLoadArchive.hpp"
#include "fn_stGetCurrentStageKind.hpp"
#include "fn_stGetStageKind_30city?.hpp"
#include "fn_grSetupCityEventData.hpp"
#include "fn_800E5A28.hpp"
#include "fn_8006E664.hpp"
#include "fn_800DE514.hpp"



void fn_grLoadGroundArchive(PPC::Runtime::GCContext* context)
{
/*800CE7A0 000CB5A0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*800CE7A4 000CB5A4*/ PPC::Runtime::ASM::mflr(context->r0);
/*800CE7A8 000CB5A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800CE7AC 000CB5AC*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800CE7B0 000CB5B0*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*800CE7B4 000CB5B4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800CE7B8 000CB5B8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800CE7BC 000CB5BC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800CE7C0 000CB5C0*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800CE7C4 000CB5C4*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*800CE7C8 000CB5C8*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180557638 @ Get_MemoryOffset_HighBit);
/*800CE7CC 000CB5CC*/ PPC::Runtime::ASM::slwi(context->r4, context->r28, 2);
/*800CE7D0 000CB5D0*/ PPC::Runtime::ASM::lis(context->r5, MemoryOffset_793 @ Get_MemoryOffset_HighBit);
/*800CE7D4 000CB5D4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, STRUCT_BYTE4_COUNT_180557638 @ Get_MemoryOffset_LowBit);
/*800CE7D8 000CB5D8*/ PPC::Runtime::ASM::add(context->r29, context->r0, context->r4);
/*800CE7DC 000CB5DC*/ PPC::Runtime::ASM::addi(context->r31, context->r5, MemoryOffset_793 @ Get_MemoryOffset_LowBit);
/*800CE7E0 000CB5E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*800CE7E4 000CB5E4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800CE7E8 000CB5E8*/ PPC::Runtime::ASM::bne(.L_800CE8FC);
/*800CE7EC 000CB5EC*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x16);
/*800CE7F0 000CB5F0*/ PPC::Runtime::ASM::bne(.L_800CE800);
/*800CE7F4 000CB5F4*/ PPC::Runtime::ASM::addi(context->r0, context->r31, 0x258);
/*800CE7F8 000CB5F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*800CE7FC 000CB5FC*/ PPC::Runtime::ASM::b(.L_800CE85C);
RUNTIME_PPC_JUMP_LABEL(.L_800CE800, 0x800CE800) //this is a jump label
/*800CE800 000CB600*/ PPC::Runtime::ASM::mulli(context->r4, context->r28, 0x14);
/*800CE804 000CB604*/ PPC::Runtime::ASM::addi(context->r30, context->r31, 0xbf4);
/*800CE808 000CB608*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*800CE80C 000CB60C*/ PPC::Runtime::ASM::mr(context->r0, context->r30);
/*800CE810 000CB610*/ PPC::Runtime::ASM::add(context->r6, context->r0, context->r4);
/*800CE814 000CB614*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800CE818 000CB618*/ PPC::Runtime::ASM::add(context->r30, context->r30, context->r4);
/*800CE81C 000CB61C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*800CE820 000CB620*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800CE824 000CB624*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800CE828 000CB628*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*800CE82C 000CB62C*/ PPC::Runtime::ASM::bl(fn_lbLoadArchive);
/*800CE830 000CB630*/ PPC::Runtime::ASM::addi(context->r8, context->r30, 0x8);
/*800CE834 000CB634*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*800CE838 000CB638*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*800CE83C 000CB63C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800CE840 000CB640*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*800CE844 000CB644*/ PPC::Runtime::ASM::addi(context->r5, context->r7, 0xc);
/*800CE848 000CB648*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r8));
/*800CE84C 000CB64C*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x10);
/*800CE850 000CB650*/ PPC::Runtime::ASM::li(context->r9, 0x0);
/*800CE854 000CB654*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*800CE858 000CB658*/ PPC::Runtime::ASM::bl(fn_lbLoadArchive);
RUNTIME_PPC_JUMP_LABEL(.L_800CE85C, 0x800CE85C) //this is a jump label
/*800CE85C 000CB65C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*800CE860 000CB660*/ PPC::Runtime::ASM::bl(fn_stGetCurrentStageKind);
/*800CE864 000CB664*/ PPC::Runtime::ASM::bl(fn_stGetStageKind_30city?);
/*800CE868 000CB668*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800CE86C 000CB66C*/ PPC::Runtime::ASM::beq(.L_800CE890);
/*800CE870 000CB670*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x9);
/*800CE874 000CB674*/ PPC::Runtime::ASM::beq(.L_800CE888);
/*800CE878 000CB678*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xec8);
/*800CE87C 000CB67C*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0xed4);
/*800CE880 000CB680*/ PPC::Runtime::ASM::li(context->r4, 0xac);
/*800CE884 000CB684*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800CE888, 0x800CE888) //this is a jump label
/*800CE888 000CB688*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800CE88C 000CB68C*/ PPC::Runtime::ASM::bl(fn_grSetupCityEventData);
RUNTIME_PPC_JUMP_LABEL(.L_800CE890, 0x800CE890) //this is a jump label
/*800CE890 000CB690*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*800CE894 000CB694*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800CE898 000CB698*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800CE89C 000CB69C*/ PPC::Runtime::ASM::bne(.L_800CE8FC);
/*800CE8A0 000CB6A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800CE8A4 000CB6A4*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*800CE8A8 000CB6A8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800CE8AC 000CB6AC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800CE8B0 000CB6B0*/ PPC::Runtime::ASM::beq(.L_800CE8BC);
/*800CE8B4 000CB6B4*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800CE8B8 000CB6B8*/ PPC::Runtime::ASM::b(.L_800CE8C0);
RUNTIME_PPC_JUMP_LABEL(.L_800CE8BC, 0x800CE8BC) //this is a jump label
/*800CE8BC 000CB6BC*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805DF5C8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_800CE8C0, 0x800CE8C0) //this is a jump label
/*800CE8C0 000CB6C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*800CE8C4 000CB6C4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r4));
/*800CE8C8 000CB6C8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800CE8CC 000CB6CC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
/*800CE8D0 000CB6D0*/ PPC::Runtime::ASM::beq(.L_800CE8E4);
/*800CE8D4 000CB6D4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800CE8D8 000CB6D8*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*800CE8DC 000CB6DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*800CE8E0 000CB6E0*/ PPC::Runtime::ASM::bl(fn_800E5A28);
RUNTIME_PPC_JUMP_LABEL(.L_800CE8E4, 0x800CE8E4) //this is a jump label
/*800CE8E4 000CB6E4*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*800CE8E8 000CB6E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800CE8EC 000CB6EC*/ PPC::Runtime::ASM::bl(fn_8006E664);
/*800CE8F0 000CB6F0*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*800CE8F4 000CB6F4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800CE8F8 000CB6F8*/ PPC::Runtime::ASM::bl(fn_800DE514);
RUNTIME_PPC_JUMP_LABEL(.L_800CE8FC, 0x800CE8FC) //this is a jump label
/*800CE8FC 000CB6FC*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*800CE900 000CB700*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800CE904 000CB704*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800CE908 000CB708*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800CE90C 000CB70C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800CE910 000CB710*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800CE914 000CB714*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800CE918 000CB718*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800CE91C 000CB71C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*800CE920 000CB720*/ PPC::Runtime::ASM::blr();
}
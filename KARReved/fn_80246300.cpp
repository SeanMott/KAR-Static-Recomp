//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80247EDC.hpp"



void fn_80246300(PPC::Runtime::GCContext* context)
{
/*80246300 00243100*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80246304 00243104*/ PPC::Runtime::ASM::mflr(context->r0);
/*80246308 00243108*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8024630C 0024310C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80246310 00243110*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80246314 00243114*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80246318 00243118*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8024631C 0024311C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804B57D8 @ Get_MemoryOffset_HighBit);
/*80246320 00243120*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33c, context->r29));
/*80246324 00243124*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_804B57D8 @ Get_MemoryOffset_LowBit);
/*80246328 00243128*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8024632C 0024312C*/ PPC::Runtime::ASM::beq(.L_80246340);
/*80246330 00243130*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*80246334 00243134*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0xc);
/*80246338 00243138*/ PPC::Runtime::ASM::li(context->r4, 0xf9);
/*8024633C 0024313C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80246340, 0x80246340) //this is a jump label
/*80246340 00243140*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x340, context->r29));
/*80246344 00243144*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r30));
/*80246348 00243148*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8024634C 0024314C*/ PPC::Runtime::ASM::bne(.L_80246370);
/*80246350 00243150*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055DC4C @ Get_MemoryOffset_HighBit);
/*80246354 00243154*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8055DC4C @ Get_MemoryOffset_LowBit);
/*80246358 00243158*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAlloc);
/*8024635C 0024315C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r30));
/*80246360 00243160*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80246364 00243164*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80246368 00243168*/ PPC::Runtime::ASM::bl(fn_80247EDC);
/*8024636C 0024316C*/ PPC::Runtime::ASM::b(.L_8024638C);
RUNTIME_PPC_JUMP_LABEL(.L_80246370, 0x80246370) //this is a jump label
/*80246370 00243170*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xd4);
/*80246374 00243174*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80246378 00243178*/ PPC::Runtime::ASM::bl(OSReport);
/*8024637C 0024317C*/ PPC::Runtime::ASM::li(context->r3, String_ "mplib." 11 @ Get_MemoryOffset_SDA21);
/*80246380 00243180*/ PPC::Runtime::ASM::li(context->r4, 0x1b8);
/*80246384 00243184*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7348 @ Get_MemoryOffset_SDA21);
/*80246388 00243188*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8024638C, 0x8024638C) //this is a jump label
/*8024638C 0024318C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80246390 00243190*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80246394 00243194*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80246398 00243198*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8024639C 0024319C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802463A0 002431A0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*802463A4 002431A4*/ PPC::Runtime::ASM::blr();
}
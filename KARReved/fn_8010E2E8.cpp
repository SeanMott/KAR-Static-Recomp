//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800DBE48.hpp"
#include "fn_800E85A8.hpp"



void fn_8010E2E8(PPC::Runtime::GCContext* context)
{
/*8010E2E8 0010B0E8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8010E2EC 0010B0EC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8010E2F0 0010B0F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010E2F4 0010B0F4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8010E2F8 0010B0F8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8010E2FC 0010B0FC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8010E300 0010B100*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8010E304 0010B104*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8010E308 0010B108*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8010E30C 0010B10C*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8010E310 0010B110*/ PPC::Runtime::ASM::beq(.L_8010E324);
/*8010E314 0010B114*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8010E318 0010B118*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8010E31C 0010B11C*/ PPC::Runtime::ASM::beq(.L_8010E324);
/*8010E320 0010B120*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8010E324, 0x8010E324) //this is a jump label
/*8010E324 0010B124*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8010E328 0010B128*/ PPC::Runtime::ASM::bne(.L_8010E344);
/*8010E32C 0010B12C*/ PPC::Runtime::ASM::lis(context->r3, String_Debug_ "grdesert1." Get_MemoryOffset_HighBit);
/*8010E330 0010B130*/ PPC::Runtime::ASM::lis(context->r5, "String_Debug" ndiviParam->loopAnimAll "" Get_MemoryOffset_HighBit);
/*8010E334 0010B134*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_Debug_ "grdesert1." Get_MemoryOffset_LowBit);
/*8010E338 0010B138*/ PPC::Runtime::ASM::li(context->r4, 0x31);
/*8010E33C 0010B13C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, "String_Debug" ndiviParam->loopAnimAll "" Get_MemoryOffset_LowBit);
/*8010E340 0010B140*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8010E344, 0x8010E344) //this is a jump label
/*8010E344 0010B144*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8010E348 0010B148*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010E34C 0010B14C*/ PPC::Runtime::ASM::bl(fn_800DBE48);
/*8010E350 0010B150*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010E354 0010B154*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6358 @ Get_MemoryOffset_SDA21);
/*8010E358 0010B158*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*8010E35C 0010B15C*/ PPC::Runtime::ASM::bl(fn_800E85A8);
/*8010E360 0010B160*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010E364 0010B164*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8010E368 0010B168*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8010E36C 0010B16C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8010E370 0010B170*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8010E374 0010B174*/ PPC::Runtime::ASM::blr();
}
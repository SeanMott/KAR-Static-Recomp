//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800D79C0.hpp"
#include "fn_800F7870.hpp"
#include "fn_800FA378.hpp"



void fn_800FA2D8(PPC::Runtime::GCContext* context)
{
/*800FA2D8 000F70D8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800FA2DC 000F70DC*/ PPC::Runtime::ASM::mflr(context->r0);
/*800FA2E0 000F70E0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800FA2E4 000F70E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800FA2E8 000F70E8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800FA2EC 000F70EC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800FA2F0 000F70F0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800FA2F4 000F70F4*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*800FA2F8 000F70F8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*800FA2FC 000F70FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
/*800FA300 000F7100*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800FA304 000F7104*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r3));
/*800FA308 000F7108*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*800FA30C 000F710C*/ PPC::Runtime::ASM::lwz(context->r6, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FA310 000F7110*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800FA314 000F7114*/ PPC::Runtime::ASM::addi(context->r3, context->r6, 0x54);
/*800FA318 000F7118*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*800FA31C 000F711C*/ PPC::Runtime::ASM::lwzx(context->r4, context->r4, context->r0);
/*800FA320 000F7120*/ PPC::Runtime::ASM::bl(fn_800D79C0);
/*800FA324 000F7124*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r31));
/*800FA328 000F7128*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800FA32C 000F712C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r31));
/*800FA330 000F7130*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r3));
/*800FA334 000F7134*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800FA338 000F7138*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*800FA33C 000F713C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800FA340 000F7140*/ PPC::Runtime::ASM::beq(.L_800FA354);
/*800FA344 000F7144*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800FA348 000F7148*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800FA34C 000F714C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800FA350 000F7150*/ PPC::Runtime::ASM::bl(fn_800F7870);
RUNTIME_PPC_JUMP_LABEL(.L_800FA354, 0x800FA354) //this is a jump label
/*800FA354 000F7154*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800FA358 000F7158*/ PPC::Runtime::ASM::bl(fn_800FA378);
/*800FA35C 000F715C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800FA360 000F7160*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800FA364 000F7164*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800FA368 000F7168*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800FA36C 000F716C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800FA370 000F7170*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800FA374 000F7174*/ PPC::Runtime::ASM::blr();
}
//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "memset.hpp"
#include "memset.hpp"
#include "fn_8005D230.hpp"
#include "fn_8020D894.hpp"
#include "fn_8020D894.hpp"



void fn_8020DBB8(PPC::Runtime::GCContext* context)
{
/*8020DBB8 0020A9B8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8020DBBC 0020A9BC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8020DBC0 0020A9C0*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_18055A404 @ Get_MemoryOffset_HighBit);
/*8020DBC4 0020A9C4*/ PPC::Runtime::ASM::li(context->r5, 0x4f0);
/*8020DBC8 0020A9C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8020DBCC 0020A9CC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8020DBD0 0020A9D0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8020DBD4 0020A9D4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020DBD8 0020A9D8*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8020DBDC 0020A9DC*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8020DBE0 0020A9E0*/ PPC::Runtime::ASM::addi(context->r3, context->r4, STRUCT_BYTE4_COUNT_18055A404 @ Get_MemoryOffset_LowBit);
/*8020DBE4 0020A9E4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8020DBE8 0020A9E8*/ PPC::Runtime::ASM::bl(memset);
/*8020DBEC 0020A9EC*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18055A280 @ Get_MemoryOffset_HighBit);
/*8020DBF0 0020A9F0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8020DBF4 0020A9F4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_18055A280 @ Get_MemoryOffset_LowBit);
/*8020DBF8 0020A9F8*/ PPC::Runtime::ASM::li(context->r5, 0x184);
/*8020DBFC 0020A9FC*/ PPC::Runtime::ASM::bl(memset);
/*8020DC00 0020AA00*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1345 @ Get_MemoryOffset_HighBit);
/*8020DC04 0020AA04*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18055A404 @ Get_MemoryOffset_HighBit);
/*8020DC08 0020AA08*/ PPC::Runtime::ASM::addi(context->r31, context->r4, MemoryOffset_1345 @ Get_MemoryOffset_LowBit);
/*8020DC0C 0020AA0C*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*8020DC10 0020AA10*/ PPC::Runtime::ASM::addi(context->r30, context->r3, STRUCT_BYTE4_COUNT_18055A404 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_8020DC14, 0x8020DC14) //this is a jump label
/*8020DC14 0020AA14*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8020DC18 0020AA18*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*8020DC1C 0020AA1C*/ PPC::Runtime::ASM::beq(.L_8020DC28);
/*8020DC20 0020AA20*/ PPC::Runtime::ASM::bl(fn_8005D230);
/*8020DC24 0020AA24*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8020DC28, 0x8020DC28) //this is a jump label
/*8020DC28 0020AA28*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8020DC2C 0020AA2C*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x10);
/*8020DC30 0020AA30*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4f);
/*8020DC34 0020AA34*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x4);
/*8020DC38 0020AA38*/ PPC::Runtime::ASM::blt(.L_8020DC14);
/*8020DC3C 0020AA3C*/ PPC::Runtime::ASM::lis(context->r4, fn_8020D894 @ Get_MemoryOffset_HighBit);
/*8020DC40 0020AA40*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8020DC44 0020AA44*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8020D894 @ Get_MemoryOffset_LowBit);
/*8020DC48 0020AA48*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8020DC4C 0020AA4C*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*8020DC50 0020AA50*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8020DC54 0020AA54*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8020DC58 0020AA58*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8020DC5C 0020AA5C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020DC60 0020AA60*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8020DC64 0020AA64*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8020DC68 0020AA68*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8020DC6C 0020AA6C*/ PPC::Runtime::ASM::blr();
}
//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_BlockReadCallback.hpp"
#include "fn_BlockReadCallback.hpp"
#include "fn___CARDReadSegment.hpp"



void fn___CARDRead(PPC::Runtime::GCContext* context)
{
/*803E4448 003E1248*/ PPC::Runtime::ASM::mflr(context->r0);
/*803E444C 003E124C*/ PPC::Runtime::ASM::mulli(context->r9, context->r3, 0x110);
/*803E4450 003E1250*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803E4454 003E1254*/ PPC::Runtime::ASM::lis(context->r8, STRUCT_BYTE4_COUNT_18056E4E8 @ Get_MemoryOffset_HighBit);
/*803E4458 003E1258*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r1));
/*803E445C 003E125C*/ PPC::Runtime::ASM::addi(context->r0, context->r8, STRUCT_BYTE4_COUNT_18056E4E8 @ Get_MemoryOffset_LowBit);
/*803E4460 003E1260*/ PPC::Runtime::ASM::add(context->r8, context->r0, context->r9);
/*803E4464 003E1264*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803E4468 003E1268*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803E446C 003E126C*/ PPC::Runtime::ASM::bne(.L_803E4478);
/*803E4470 003E1270*/ PPC::Runtime::ASM::li(context->r3, -0x3);
/*803E4474 003E1274*/ PPC::Runtime::ASM::b(.L_803E449C);
RUNTIME_PPC_JUMP_LABEL(.L_803E4478, 0x803E4478) //this is a jump label
/*803E4478 003E1278*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r8));
/*803E447C 003E127C*/ PPC::Runtime::ASM::srwi(context->r0, context->r5, 9);
/*803E4480 003E1280*/ PPC::Runtime::ASM::lis(context->r5, fn_BlockReadCallback @ Get_MemoryOffset_HighBit);
/*803E4484 003E1284*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r8));
/*803E4488 003E1288*/ PPC::Runtime::ASM::addi(context->r0, context->r5, fn_BlockReadCallback @ Get_MemoryOffset_LowBit);
/*803E448C 003E128C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r8));
/*803E4490 003E1290*/ PPC::Runtime::ASM::mr(context->r4, context->r0);
/*803E4494 003E1294*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r8));
/*803E4498 003E1298*/ PPC::Runtime::ASM::bl(fn___CARDReadSegment);
RUNTIME_PPC_JUMP_LABEL(.L_803E449C, 0x803E449C) //this is a jump label
/*803E449C 003E129C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803E44A0 003E12A0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x8);
/*803E44A4 003E12A4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803E44A8 003E12A8*/ PPC::Runtime::ASM::blr();
}
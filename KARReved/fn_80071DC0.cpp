//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_lbLoadArchive.hpp"



void fn_80071DC0(PPC::Runtime::GCContext* context)
{
/*80071DC0 0006EBC0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80071DC4 0006EBC4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80071DC8 0006EBC8*/ PPC::Runtime::ASM::lis(context->r3, lbl_80550F08 @ Get_MemoryOffset_HighBit);
/*80071DCC 0006EBCC*/ PPC::Runtime::ASM::li(context->r4, 0xd8);
/*80071DD0 0006EBD0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80071DD4 0006EBD4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80550F08 @ Get_MemoryOffset_LowBit);
/*80071DD8 0006EBD8*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80071DDC 0006EBDC*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*80071DE0 0006EBE0*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_242 @ Get_MemoryOffset_HighBit);
/*80071DE4 0006EBE4*/ PPC::Runtime::ASM::lis(context->r5, MemoryOffset_243 @ Get_MemoryOffset_HighBit);
/*80071DE8 0006EBE8*/ PPC::Runtime::ASM::addi(context->r4, context->r3, MemoryOffset_242 @ Get_MemoryOffset_LowBit);
/*80071DEC 0006EBEC*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80071DF0 0006EBF0*/ PPC::Runtime::ASM::addi(context->r6, context->r5, MemoryOffset_243 @ Get_MemoryOffset_LowBit);
/*80071DF4 0006EBF4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80071DF8 0006EBF8*/ PPC::Runtime::ASM::li(context->r5, STRUCT_BYTE4_COUNT_1805DD5D0 @ Get_MemoryOffset_SDA21);
/*80071DFC 0006EBFC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80071E00 0006EC00*/ PPC::Runtime::ASM::bl(fn_lbLoadArchive);
/*80071E04 0006EC04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80071E08 0006EC08*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80071E0C 0006EC0C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80071E10 0006EC10*/ PPC::Runtime::ASM::blr();
}
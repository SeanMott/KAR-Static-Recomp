//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_TRKAcquireMutex.hpp"
#include "fn_TRKReleaseMutex.hpp"



void fn_TRKReleaseBuffer(PPC::Runtime::GCContext* context)
{
/*803BE19C 003BAF9C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803BE1A0 003BAFA0*/ PPC::Runtime::ASM::mflr(context->r0);
/*803BE1A4 003BAFA4*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*803BE1A8 003BAFA8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803BE1AC 003BAFAC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803BE1B0 003BAFB0*/ PPC::Runtime::ASM::beq(.L_803BE1EC);
/*803BE1B4 003BAFB4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803BE1B8 003BAFB8*/ PPC::Runtime::ASM::blt(.L_803BE1EC);
/*803BE1BC 003BAFBC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x3);
/*803BE1C0 003BAFC0*/ PPC::Runtime::ASM::bge(.L_803BE1EC);
/*803BE1C4 003BAFC4*/ PPC::Runtime::ASM::mulli(context->r4, context->r3, 0x890);
/*803BE1C8 003BAFC8*/ PPC::Runtime::ASM::lis(context->r3, lbl_80569E90 @ Get_MemoryOffset_HighBit);
/*803BE1CC 003BAFCC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_80569E90 @ Get_MemoryOffset_LowBit);
/*803BE1D0 003BAFD0*/ PPC::Runtime::ASM::add(context->r31, context->r0, context->r4);
/*803BE1D4 003BAFD4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803BE1D8 003BAFD8*/ PPC::Runtime::ASM::bl(fn_TRKAcquireMutex);
/*803BE1DC 003BAFDC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803BE1E0 003BAFE0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803BE1E4 003BAFE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*803BE1E8 003BAFE8*/ PPC::Runtime::ASM::bl(fn_TRKReleaseMutex);
RUNTIME_PPC_JUMP_LABEL(.L_803BE1EC, 0x803BE1EC) //this is a jump label
/*803BE1EC 003BAFEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803BE1F0 003BAFF0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803BE1F4 003BAFF4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803BE1F8 003BAFF8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803BE1FC 003BAFFC*/ PPC::Runtime::ASM::blr();
}
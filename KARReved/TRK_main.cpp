//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "MWTRACE.hpp"
#include "TRKInitializeNub.hpp"
#include "TRKNubWelcome.hpp"
#include "TRKNubMainLoop.hpp"
#include "TRKTerminateNub.hpp"



void TRK_main(PPC::Runtime::GCContext* context)
{
/*803C21BC 003BEFBC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803C21C0 003BEFC0*/ PPC::Runtime::ASM::mflr(context->r0);
/*803C21C4 003BEFC4*/ PPC::Runtime::ASM::lis(context->r4, AT_80_8048C170 @ Get_MemoryOffset_HighBit);
/*803C21C8 003BEFC8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803C21CC 003BEFCC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803C21D0 003BEFD0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, AT_80_8048C170 @ Get_MemoryOffset_LowBit);
/*803C21D4 003BEFD4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803C21D8 003BEFD8*/ PPC::Runtime::ASM::bl(MWTRACE);
/*803C21DC 003BEFDC*/ PPC::Runtime::ASM::bl(TRKInitializeNub);
/*803C21E0 003BEFE0*/ PPC::Runtime::ASM::lis(context->r4, TRK_mainError_8056BDE8 @ Get_MemoryOffset_HighBit);
/*803C21E4 003BEFE4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803C21E8 003BEFE8*/ PPC::Runtime::ASM::stw(context->r3, TRK_mainError_8056BDE8 @ Get_MemoryOffset_LowBit ( context->r4 ));
/*803C21EC 003BEFEC*/ PPC::Runtime::ASM::bne(.L_803C21F8);
/*803C21F0 003BEFF0*/ PPC::Runtime::ASM::bl(TRKNubWelcome);
/*803C21F4 003BEFF4*/ PPC::Runtime::ASM::bl(TRKNubMainLoop);
RUNTIME_PPC_JUMP_LABEL(.L_803C21F8, 0x803C21F8) //this is a jump label
/*803C21F8 003BEFF8*/ PPC::Runtime::ASM::bl(TRKTerminateNub);
/*803C21FC 003BEFFC*/ PPC::Runtime::ASM::lis(context->r4, TRK_mainError_8056BDE8 @ Get_MemoryOffset_HighBit);
/*803C2200 003BF000*/ PPC::Runtime::ASM::stw(context->r3, TRK_mainError_8056BDE8 @ Get_MemoryOffset_LowBit ( context->r4 ));
/*803C2204 003BF004*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803C2208 003BF008*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803C220C 003BF00C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803C2210 003BF010*/ PPC::Runtime::ASM::blr();
}
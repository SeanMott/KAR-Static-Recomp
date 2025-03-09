//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"



void SISetXY(PPC::Runtime::GCContext* context)
{
/*803E93C0 003E61C0*/ PPC::Runtime::ASM::mflr(context->r0);
/*803E93C4 003E61C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803E93C8 003E61C8*/ PPC::Runtime::ASM::slwi(context->r0, context->r4, 8);
/*803E93CC 003E61CC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r1));
/*803E93D0 003E61D0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803E93D4 003E61D4*/ PPC::Runtime::ASM::slwi(context->r31, context->r3, 16);
/*803E93D8 003E61D8*/ PPC::Runtime::ASM::or(context->r31, context->r31, context->r0);
/*803E93DC 003E61DC*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*803E93E0 003E61E0*/ PPC::Runtime::ASM::lis(context->r4, Si_804FCC24 @ Get_MemoryOffset_HighBit);
/*803E93E4 003E61E4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, Si_804FCC24 @ Get_MemoryOffset_LowBit);
/*803E93E8 003E61E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*803E93EC 003E61EC*/ PPC::Runtime::ASM::addi(context->r5, context->r4, 0x4);
/*803E93F0 003E61F0*/ PPC::Runtime::ASM::lis(context->r4, 0xcc00);
/*803E93F4 003E61F4*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 24, 5);
/*803E93F8 003E61F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*803E93FC 003E61FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*803E9400 003E6200*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r31);
/*803E9404 003E6204*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*803E9408 003E6208*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*803E940C 003E620C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6430, context->r4));
/*803E9410 003E6210*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*803E9414 003E6214*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803E9418 003E6218*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803E941C 003E621C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803E9420 003E6220*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x18);
/*803E9424 003E6224*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803E9428 003E6228*/ PPC::Runtime::ASM::blr();
}
//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSGetTime.hpp"
#include "fn_803ED0E0.hpp"



void fn_803ED2DC(PPC::Runtime::GCContext* context)
{
/*803ED2DC 003EA0DC*/ PPC::Runtime::ASM::mflr(context->r0);
/*803ED2E0 003EA0E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803ED2E4 003EA0E4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r1));
/*803ED2E8 003EA0E8*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE0DC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803ED2EC 003EA0EC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x2);
/*803ED2F0 003EA0F0*/ PPC::Runtime::ASM::bne(.L_803ED31C);
/*803ED2F4 003EA0F4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803ED2F8 003EA0F8*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE0DC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803ED2FC 003EA0FC*/ PPC::Runtime::ASM::bl(OSGetTime);
/*803ED300 003EA100*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DE0E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803ED304 003EA104*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE0E4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803ED308 003EA108*/ PPC::Runtime::ASM::subfc(context->r0, context->r0, context->r4);
/*803ED30C 003EA10C*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 2);
/*803ED310 003EA110*/ PPC::Runtime::ASM::mr(context->r3, context->r0);
/*803ED314 003EA114*/ PPC::Runtime::ASM::bl(fn_803ED0E0);
/*803ED318 003EA118*/ PPC::Runtime::ASM::b(.L_803ED324);
RUNTIME_PPC_JUMP_LABEL(.L_803ED31C, 0x803ED31C) //this is a jump label
/*803ED31C 003EA11C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*803ED320 003EA120*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE0DC @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_803ED324, 0x803ED324) //this is a jump label
/*803ED324 003EA124*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803ED328 003EA128*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x8);
/*803ED32C 003EA12C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803ED330 003EA130*/ PPC::Runtime::ASM::blr();
}
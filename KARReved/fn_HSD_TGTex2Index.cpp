//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___assert.hpp"



void fn_HSD_TGTex2Index(PPC::Runtime::GCContext* context)
{
/*803F743C 003F423C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803F7440 003F4240*/ PPC::Runtime::ASM::mflr(context->r0);
/*803F7444 003F4244*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803F7448 003F4248*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x4);
/*803F744C 003F424C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x7);
/*803F7450 003F4250*/ PPC::Runtime::ASM::bgt(.L_803F74AC);
/*803F7454 003F4254*/ PPC::Runtime::ASM::lis(context->r3, jumptable_8050213C @ Get_MemoryOffset_HighBit);
/*803F7458 003F4258*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*803F745C 003F425C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, jumptable_8050213C @ Get_MemoryOffset_LowBit);
/*803F7460 003F4260*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*803F7464 003F4264*/ PPC::Runtime::ASM::mtctr(context->r0);
/*803F7468 003F4268*/ PPC::Runtime::ASM::bctr();
/*803F746C 003F426C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803F7470 003F4270*/ PPC::Runtime::ASM::b(.L_803F74C0);
/*803F7474 003F4274*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803F7478 003F4278*/ PPC::Runtime::ASM::b(.L_803F74C0);
/*803F747C 003F427C*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*803F7480 003F4280*/ PPC::Runtime::ASM::b(.L_803F74C0);
/*803F7484 003F4284*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*803F7488 003F4288*/ PPC::Runtime::ASM::b(.L_803F74C0);
/*803F748C 003F428C*/ PPC::Runtime::ASM::li(context->r3, 0x4);
/*803F7490 003F4290*/ PPC::Runtime::ASM::b(.L_803F74C0);
/*803F7494 003F4294*/ PPC::Runtime::ASM::li(context->r3, 0x5);
/*803F7498 003F4298*/ PPC::Runtime::ASM::b(.L_803F74C0);
/*803F749C 003F429C*/ PPC::Runtime::ASM::li(context->r3, 0x6);
/*803F74A0 003F42A0*/ PPC::Runtime::ASM::b(.L_803F74C0);
/*803F74A4 003F42A4*/ PPC::Runtime::ASM::li(context->r3, 0x7);
/*803F74A8 003F42A8*/ PPC::Runtime::ASM::b(.L_803F74C0);
RUNTIME_PPC_JUMP_LABEL(.L_803F74AC, 0x803F74AC) //this is a jump label
/*803F74AC 003F42AC*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_1278 @ Get_MemoryOffset_SDA21);
/*803F74B0 003F42B0*/ PPC::Runtime::ASM::li(context->r4, 0x6fe);
/*803F74B4 003F42B4*/ PPC::Runtime::ASM::li(context->r5, MemoryOffset_1275 @ Get_MemoryOffset_SDA21);
/*803F74B8 003F42B8*/ PPC::Runtime::ASM::bl(fn___assert);
/*803F74BC 003F42BC*/ PPC::Runtime::ASM::li(context->r3, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_803F74C0, 0x803F74C0) //this is a jump label
/*803F74C0 003F42C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803F74C4 003F42C4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803F74C8 003F42C8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803F74CC 003F42CC*/ PPC::Runtime::ASM::blr();
}
//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80172C3C.hpp"
#include "fn_80172CA8.hpp"



void fn_80173018(PPC::Runtime::GCContext* context)
{
/*80173018 0016FE18*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8017301C 0016FE1C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80173020 0016FE20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80173024 0016FE24*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80173028 0016FE28*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8017302C 0016FE2C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80173030 0016FE30*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80173034 0016FE34*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80173038 0016FE38*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*8017303C 0016FE3C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r30));
/*80173040 0016FE40*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80173044 0016FE44*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80173048 0016FE48*/ PPC::Runtime::ASM::bgt(.L_8017305C);
/*8017304C 0016FE4C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80173050 0016FE50*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80173054 0016FE54*/ PPC::Runtime::ASM::bl(fn_80172C3C);
/*80173058 0016FE58*/ PPC::Runtime::ASM::b(.L_80173068);
RUNTIME_PPC_JUMP_LABEL(.L_8017305C, 0x8017305C) //this is a jump label
/*8017305C 0016FE5C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r30));
/*80173060 0016FE60*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80173064 0016FE64*/ PPC::Runtime::ASM::bl(fn_80172CA8);
RUNTIME_PPC_JUMP_LABEL(.L_80173068, 0x80173068) //this is a jump label
/*80173068 0016FE68*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8017306C 0016FE6C*/ PPC::Runtime::ASM::bne(.L_80173080);
/*80173070 0016FE70*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6CA0 @ Get_MemoryOffset_SDA21);
/*80173074 0016FE74*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*80173078 0016FE78*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6CA8 @ Get_MemoryOffset_SDA21);
/*8017307C 0016FE7C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80173080, 0x80173080) //this is a jump label
/*80173080 0016FE80*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80173084 0016FE84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80173088 0016FE88*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8017308C 0016FE8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*80173090 0016FE90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80173094 0016FE94*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*80173098 0016FE98*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8017309C 0016FE9C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*801730A0 0016FEA0*/ PPC::Runtime::ASM::bne(.L_801730EC);
/*801730A4 0016FEA4*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*801730A8 0016FEA8*/ PPC::Runtime::ASM::beq(.L_801730EC);
/*801730AC 0016FEAC*/ PPC::Runtime::ASM::bne(.L_801730C0);
/*801730B0 0016FEB0*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6CA0 @ Get_MemoryOffset_SDA21);
/*801730B4 0016FEB4*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*801730B8 0016FEB8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6CA8 @ Get_MemoryOffset_SDA21);
/*801730BC 0016FEBC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801730C0, 0x801730C0) //this is a jump label
/*801730C0 0016FEC0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*801730C4 0016FEC4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801730C8 0016FEC8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*801730CC 0016FECC*/ PPC::Runtime::ASM::bne(.L_801730DC);
/*801730D0 0016FED0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*801730D4 0016FED4*/ PPC::Runtime::ASM::beq(.L_801730DC);
/*801730D8 0016FED8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801730DC, 0x801730DC) //this is a jump label
/*801730DC 0016FEDC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801730E0 0016FEE0*/ PPC::Runtime::ASM::bne(.L_801730EC);
/*801730E4 0016FEE4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801730E8 0016FEE8*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_801730EC, 0x801730EC) //this is a jump label
/*801730EC 0016FEEC*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*801730F0 0016FEF0*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*801730F4 0016FEF4*/ PPC::Runtime::ASM::ble(.L_80173100);
/*801730F8 0016FEF8*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*801730FC 0016FEFC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80173100, 0x80173100) //this is a jump label
/*80173100 0016FF00*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80173104 0016FF04*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80173108 0016FF08*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8017310C 0016FF0C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80173110 0016FF10*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80173114 0016FF14*/ PPC::Runtime::ASM::blr();
}
//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8016F97C.hpp"



void fn_801700E0(PPC::Runtime::GCContext* context)
{
/*801700E0 0016CEE0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801700E4 0016CEE4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801700E8 0016CEE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801700EC 0016CEEC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801700F0 0016CEF0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801700F4 0016CEF4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*801700F8 0016CEF8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801700FC 0016CEFC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80170100 0016CF00*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*80170104 0016CF04*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*80170108 0016CF08*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8017010C 0016CF0C*/ PPC::Runtime::ASM::bl(fn_8016F97C);
/*80170110 0016CF10*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80170114 0016CF14*/ PPC::Runtime::ASM::bne(.L_80170128);
/*80170118 0016CF18*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6C38 @ Get_MemoryOffset_SDA21);
/*8017011C 0016CF1C*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*80170120 0016CF20*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6C40 @ Get_MemoryOffset_SDA21);
/*80170124 0016CF24*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80170128, 0x80170128) //this is a jump label
/*80170128 0016CF28*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8017012C 0016CF2C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80170130 0016CF30*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*80170134 0016CF34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*80170138 0016CF38*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8017013C 0016CF3C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*80170140 0016CF40*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80170144 0016CF44*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*80170148 0016CF48*/ PPC::Runtime::ASM::bne(.L_80170194);
/*8017014C 0016CF4C*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80170150 0016CF50*/ PPC::Runtime::ASM::beq(.L_80170194);
/*80170154 0016CF54*/ PPC::Runtime::ASM::bne(.L_80170168);
/*80170158 0016CF58*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6C38 @ Get_MemoryOffset_SDA21);
/*8017015C 0016CF5C*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80170160 0016CF60*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6C40 @ Get_MemoryOffset_SDA21);
/*80170164 0016CF64*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80170168, 0x80170168) //this is a jump label
/*80170168 0016CF68*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8017016C 0016CF6C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80170170 0016CF70*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80170174 0016CF74*/ PPC::Runtime::ASM::bne(.L_80170184);
/*80170178 0016CF78*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8017017C 0016CF7C*/ PPC::Runtime::ASM::beq(.L_80170184);
/*80170180 0016CF80*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80170184, 0x80170184) //this is a jump label
/*80170184 0016CF84*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80170188 0016CF88*/ PPC::Runtime::ASM::bne(.L_80170194);
/*8017018C 0016CF8C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80170190 0016CF90*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_80170194, 0x80170194) //this is a jump label
/*80170194 0016CF94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80170198 0016CF98*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8017019C 0016CF9C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801701A0 0016CFA0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801701A4 0016CFA4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801701A8 0016CFA8*/ PPC::Runtime::ASM::blr();
}
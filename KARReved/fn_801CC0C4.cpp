//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801E2140.hpp"
#include "fn_800D28DC.hpp"
#include "fn_801D0EE4.hpp"



void fn_801CC0C4(PPC::Runtime::GCContext* context)
{
/*801CC0C4 001C8EC4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801CC0C8 001C8EC8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801CC0CC 001C8ECC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1A00 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801CC0D0 001C8ED0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801CC0D4 001C8ED4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801CC0D8 001C8ED8*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*801CC0DC 001C8EDC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801CC0E0 001C8EE0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801CC0E4 001C8EE4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*801CC0E8 001C8EE8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*801CC0EC 001C8EEC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r30));
/*801CC0F0 001C8EF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x328, context->r30));
/*801CC0F4 001C8EF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*801CC0F8 001C8EF8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r30));
/*801CC0FC 001C8EFC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r30));
/*801CC100 001C8F00*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x328, context->r30));
/*801CC104 001C8F04*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x354, context->r30));
/*801CC108 001C8F08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x358, context->r30));
/*801CC10C 001C8F0C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r30));
/*801CC110 001C8F10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x35c, context->r30));
/*801CC114 001C8F14*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*801CC118 001C8F18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x754, context->r30));
/*801CC11C 001C8F1C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r4));
/*801CC120 001C8F20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb94, context->r30));
/*801CC124 001C8F24*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
/*801CC128 001C8F28*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb98, context->r30));
/*801CC12C 001C8F2C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r4));
/*801CC130 001C8F30*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb3c, context->r30));
/*801CC134 001C8F34*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r4));
/*801CC138 001C8F38*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r4));
/*801CC13C 001C8F3C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9e8, context->r30));
/*801CC140 001C8F40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9ec, context->r30));
/*801CC144 001C8F44*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r4));
/*801CC148 001C8F48*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r4));
/*801CC14C 001C8F4C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f0, context->r30));
/*801CC150 001C8F50*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f4, context->r30));
/*801CC154 001C8F54*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r4));
/*801CC158 001C8F58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r4));
/*801CC15C 001C8F5C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f8, context->r30));
/*801CC160 001C8F60*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9fc, context->r30));
/*801CC164 001C8F64*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r4));
/*801CC168 001C8F68*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r4));
/*801CC16C 001C8F6C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa00, context->r30));
/*801CC170 001C8F70*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa04, context->r30));
/*801CC174 001C8F74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r4));
/*801CC178 001C8F78*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa08, context->r30));
/*801CC17C 001C8F7C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r4));
/*801CC180 001C8F80*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*801CC184 001C8F84*/ PPC::Runtime::ASM::beq(.L_801CC1A0);
/*801CC188 001C8F88*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa18, context->r30));
/*801CC18C 001C8F8C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa18, context->r30));
/*801CC190 001C8F90*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4cc, context->r30));
/*801CC194 001C8F94*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*801CC198 001C8F98*/ PPC::Runtime::ASM::ble(.L_801CC1A0);
/*801CC19C 001C8F9C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa18, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_801CC1A0, 0x801CC1A0) //this is a jump label
/*801CC1A0 001C8FA0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r31));
/*801CC1A4 001C8FA4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1A00 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801CC1A8 001C8FA8*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*801CC1AC 001C8FAC*/ PPC::Runtime::ASM::beq(.L_801CC1BC);
/*801CC1B0 001C8FB0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801CC1B4 001C8FB4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801CC1B8 001C8FB8*/ PPC::Runtime::ASM::bl(fn_801E2140);
RUNTIME_PPC_JUMP_LABEL(.L_801CC1BC, 0x801CC1BC) //this is a jump label
/*801CC1BC 001C8FBC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*801CC1C0 001C8FC0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801CC1C4 001C8FC4*/ PPC::Runtime::ASM::beq(.L_801CC1DC);
/*801CC1C8 001C8FC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaf8, context->r30));
/*801CC1CC 001C8FCC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaf8, context->r30));
/*801CC1D0 001C8FD0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*801CC1D4 001C8FD4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*801CC1D8 001C8FD8*/ PPC::Runtime::ASM::bl(fn_800D28DC);
RUNTIME_PPC_JUMP_LABEL(.L_801CC1DC, 0x801CC1DC) //this is a jump label
/*801CC1DC 001C8FDC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*801CC1E0 001C8FE0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801CC1E4 001C8FE4*/ PPC::Runtime::ASM::bne(.L_801CC1F4);
/*801CC1E8 001C8FE8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801CC1EC 001C8FEC*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x1c);
/*801CC1F0 001C8FF0*/ PPC::Runtime::ASM::bl(fn_801D0EE4);
RUNTIME_PPC_JUMP_LABEL(.L_801CC1F4, 0x801CC1F4) //this is a jump label
/*801CC1F4 001C8FF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*801CC1F8 001C8FF8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6F98 @ Get_MemoryOffset_SDA21);
/*801CC1FC 001C8FFC*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801CC200 001C9000*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*801CC204 001C9004*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r3));
/*801CC208 001C9008*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*801CC20C 001C900C*/ PPC::Runtime::ASM::beq(.L_801CC220);
/*801CC210 001C9010*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801CC214 001C9014*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*801CC218 001C9018*/ PPC::Runtime::ASM::mtctr(context->r12);
/*801CC21C 001C901C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_801CC220, 0x801CC220) //this is a jump label
/*801CC220 001C9020*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801CC224 001C9024*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801CC228 001C9028*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801CC22C 001C902C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801CC230 001C9030*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801CC234 001C9034*/ PPC::Runtime::ASM::blr();
}
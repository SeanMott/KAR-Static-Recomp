//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80229D50.hpp"
#include "fn_80220230.hpp"
#include "fn_8007A94C.hpp"
#include "fn_8007A940.hpp"
#include "fn_8007A94C.hpp"
#include "fn_802361A0.hpp"
#include "fn_8007A62C.hpp"
#include "fn_8023687C.hpp"



void fn_80229770(PPC::Runtime::GCContext* context)
{
/*80229770 00226570*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80229774 00226574*/ PPC::Runtime::ASM::mflr(context->r0);
/*80229778 00226578*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8022977C 0022657C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80229780 00226580*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80229784 00226584*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b6, context->r3));
/* 80229788 00226588  54 00 DF FF */ extrwi. context->r0 , context->r0 , 1 , 26
/*8022978C 0022658C*/ PPC::Runtime::ASM::beq(.L_8022979C);
/*80229790 00226590*/ PPC::Runtime::ASM::bl(fn_80229D50);
/*80229794 00226594*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80229798 00226598*/ PPC::Runtime::ASM::bl(fn_80220230);
RUNTIME_PPC_JUMP_LABEL(.L_8022979C, 0x8022979C) //this is a jump label
/*8022979C 0022659C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e8, context->r31));
/*802297A0 002265A0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ec, context->r31));
/*802297A4 002265A4*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*802297A8 002265A8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e8, context->r31));
/*802297AC 002265AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r31));
/*802297B0 002265B0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e8, context->r31));
/*802297B4 002265B4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*802297B8 002265B8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*802297BC 002265BC*/ PPC::Runtime::ASM::ble(.L_802297C4);
/*802297C0 002265C0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_802297C4, 0x802297C4) //this is a jump label
/*802297C4 002265C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r31));
/*802297C8 002265C8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e8, context->r31));
/*802297CC 002265CC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*802297D0 002265D0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*802297D4 002265D4*/ PPC::Runtime::ASM::fsubs(context->f1, context->f2, context->f1);
/*802297D8 002265D8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*802297DC 002265DC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ec, context->r31));
/*802297E0 002265E0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r31));
/*802297E4 002265E4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e8, context->r31));
/*802297E8 002265E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*802297EC 002265EC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*802297F0 002265F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x200, context->r31));
/*802297F4 002265F4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*802297F8 002265F8*/ PPC::Runtime::ASM::ble(.L_80229894);
/*802297FC 002265FC*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80229800 00226600*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x200, context->r31));
/*80229804 00226604*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r31));
/*80229808 00226608*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8022980C 0022660C*/ PPC::Runtime::ASM::beq(.L_80229894);
/*80229810 00226610*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r31));
/*80229814 00226614*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x200, context->r31));
/*80229818 00226618*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r5));
/*8022981C 0022661C*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*80229820 00226620*/ PPC::Runtime::ASM::ble(.L_80229838);
/*80229824 00226624*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e8, context->r31));
/*80229828 00226628*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r5));
/*8022982C 0022662C*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f0);
/*80229830 00226630*/ PPC::Runtime::ASM::bl(fn_8007A94C);
/*80229834 00226634*/ PPC::Runtime::ASM::b(.L_80229894);
RUNTIME_PPC_JUMP_LABEL(.L_80229838, 0x80229838) //this is a jump label
/*80229838 00226638*/ PPC::Runtime::ASM::bl(fn_8007A940);
/*8022983C 0022663C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x204, context->r31));
/*80229840 00226640*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E29E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80229844 00226644*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*80229848 00226648*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8022984C 0022664C*/ PPC::Runtime::ASM::bne(.L_80229884);
/*80229850 00226650*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r31));
/*80229854 00226654*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*80229858 00226658*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E29FC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8022985C 0022665C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r3));
/*80229860 00226660*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80229864 00226664*/ PPC::Runtime::ASM::fmuls(context->f3, context->f0, context->f1);
/*80229868 00226668*/ PPC::Runtime::ASM::xoris(context->r0, context->r3, 0x8000);
/*8022986C 0022666C*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E29F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80229870 00226670*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80229874 00226674*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80229878 00226678*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*8022987C 0022667C*/ PPC::Runtime::ASM::fdivs(context->f0, context->f3, context->f0);
/*80229880 00226680*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x204, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80229884, 0x80229884) //this is a jump label
/*80229884 00226684*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x204, context->r31));
/*80229888 00226688*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r31));
/*8022988C 0022668C*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f0);
/*80229890 00226690*/ PPC::Runtime::ASM::bl(fn_8007A94C);
RUNTIME_PPC_JUMP_LABEL(.L_80229894, 0x80229894) //this is a jump label
/*80229894 00226694*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e0, context->r31));
/*80229898 00226698*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8022989C 0022669C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e4, context->r31));
/*802298A0 002266A0*/ PPC::Runtime::ASM::xor(context->r0, context->r3, context->r5);
/*802298A4 002266A4*/ PPC::Runtime::ASM::xor(context->r5, context->r4, context->r5);
/*802298A8 002266A8*/ PPC::Runtime::ASM::or.(context->r0, context->r5, context->r0);
/*802298AC 002266AC*/ PPC::Runtime::ASM::beq(.L_802298EC);
/*802298B0 002266B0*/ PPC::Runtime::ASM::bl(fn_802361A0);
/*802298B4 002266B4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*802298B8 002266B8*/ PPC::Runtime::ASM::bne(.L_802298EC);
/*802298BC 002266BC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1fc, context->r31));
/*802298C0 002266C0*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*802298C4 002266C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r31));
/*802298C8 002266C8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802298CC 002266CC*/ PPC::Runtime::ASM::beq(.L_802298EC);
/*802298D0 002266D0*/ PPC::Runtime::ASM::beq(.L_802298E0);
/*802298D4 002266D4*/ PPC::Runtime::ASM::bl(fn_8007A62C);
/*802298D8 002266D8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802298DC 002266DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_802298E0, 0x802298E0) //this is a jump label
/*802298E0 002266E0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802298E4 002266E4*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*802298E8 002266E8*/ PPC::Runtime::ASM::b(.L_80229934);
RUNTIME_PPC_JUMP_LABEL(.L_802298EC, 0x802298EC) //this is a jump label
/*802298EC 002266EC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f8, context->r31));
/*802298F0 002266F0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E29E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802298F4 002266F4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f1);
/*802298F8 002266F8*/ PPC::Runtime::ASM::ble(.L_80229934);
/*802298FC 002266FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r31));
/*80229900 00226700*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*80229904 00226704*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*80229908 00226708*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f8, context->r31));
/*8022990C 0022670C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f8, context->r31));
/*80229910 00226710*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*80229914 00226714*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80229918 00226718*/ PPC::Runtime::ASM::bne(.L_80229920);
/*8022991C 0022671C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80229920, 0x80229920) //this is a jump label
/*80229920 00226720*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f0, context->r31));
/*80229924 00226724*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f4, context->r31));
/*80229928 00226728*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E29E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8022992C 0022672C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f8, context->r31));
/*80229930 00226730*/ PPC::Runtime::ASM::bl(fn_8023687C);
RUNTIME_PPC_JUMP_LABEL(.L_80229934, 0x80229934) //this is a jump label
/*80229934 00226734*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80229938 00226738*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8022993C 0022673C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80229940 00226740*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80229944 00226744*/ PPC::Runtime::ASM::blr();
}
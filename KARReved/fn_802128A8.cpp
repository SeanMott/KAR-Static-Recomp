//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80200D10.hpp"
#include "fn_80204FAC.hpp"
#include "fn_801FD6B0.hpp"
#include "fn_80204198.hpp"
#include "fn_801FC398.hpp"
#include "fn_801FECD4.hpp"
#include "fn_801FECF8.hpp"



void fn_802128A8(PPC::Runtime::GCContext* context)
{
/*802128A8 0020F6A8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802128AC 0020F6AC*/ PPC::Runtime::ASM::mflr(context->r0);
/*802128B0 0020F6B0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2580 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802128B4 0020F6B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802128B8 0020F6B8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802128BC 0020F6BC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802128C0 0020F6C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r3));
/*802128C4 0020F6C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*802128C8 0020F6C8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r3));
/*802128CC 0020F6CC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802128D0 0020F6D0*/ PPC::Runtime::ASM::bge(.L_802128E0);
/*802128D4 0020F6D4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802128D8 0020F6D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb48, context->r31));
/*802128DC 0020F6DC*/ PPC::Runtime::ASM::b(.L_802128E8);
RUNTIME_PPC_JUMP_LABEL(.L_802128E0, 0x802128E0) //this is a jump label
/*802128E0 0020F6E0*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*802128E4 0020F6E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb48, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_802128E8, 0x802128E8) //this is a jump label
/*802128E8 0020F6E8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb50, context->r31));
/*802128EC 0020F6EC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802128F0 0020F6F0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb54, context->r31));
/*802128F4 0020F6F4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r31));
/*802128F8 0020F6F8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r4));
/*802128FC 0020F6FC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r4));
/*80212900 0020F700*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb50, context->r31));
/*80212904 0020F704*/ PPC::Runtime::ASM::bl(fn_80200D10);
/*80212908 0020F708*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8021290C 0020F70C*/ PPC::Runtime::ASM::beq(.L_8021297C);
/*80212910 0020F710*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x95c, context->r31));
/*80212914 0020F714*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80212918 0020F718*/ PPC::Runtime::ASM::bl(fn_80204FAC);
/*8021291C 0020F71C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80212920 0020F720*/ PPC::Runtime::ASM::bl(fn_801FD6B0);
/*80212924 0020F724*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80212928 0020F728*/ PPC::Runtime::ASM::bl(fn_80204198);
/*8021292C 0020F72C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2578 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80212930 0020F730*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80212934 0020F734*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E257C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80212938 0020F738*/ PPC::Runtime::ASM::li(context->r4, 0xf);
/*8021293C 0020F73C*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*80212940 0020F740*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80212944 0020F744*/ PPC::Runtime::ASM::bl(fn_801FC398);
/*80212948 0020F748*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8021294C 0020F74C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4e, context->r31));
/*80212950 0020F750*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb48, context->r31));
/*80212954 0020F754*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4e, context->r31));
/*80212958 0020F758*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8021295C 0020F75C*/ PPC::Runtime::ASM::bne(.L_80212970);
/*80212960 0020F760*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r31));
/*80212964 0020F764*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*80212968 0020F768*/ PPC::Runtime::ASM::bl(fn_801FECD4);
/*8021296C 0020F76C*/ PPC::Runtime::ASM::b(.L_8021297C);
RUNTIME_PPC_JUMP_LABEL(.L_80212970, 0x80212970) //this is a jump label
/*80212970 0020F770*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r31));
/*80212974 0020F774*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*80212978 0020F778*/ PPC::Runtime::ASM::bl(fn_801FECF8);
RUNTIME_PPC_JUMP_LABEL(.L_8021297C, 0x8021297C) //this is a jump label
/*8021297C 0020F77C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80212980 0020F780*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80212984 0020F784*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80212988 0020F788*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8021298C 0020F78C*/ PPC::Runtime::ASM::blr();
}
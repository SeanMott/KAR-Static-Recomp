//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_8022C568.hpp"
#include "fn_800B8054.hpp"
#include "fn_8022C568.hpp"
#include "fn_800BA6C0.hpp"
#include "fn_800B8054.hpp"
#include "fn_800B89A0.hpp"
#include "fn_800B8054.hpp"
#include "fn_8000AC60.hpp"
#include "fn_8022C5C0.hpp"
#include "fn_80067438.hpp"
#include "fn_801152CC.hpp"
#include "fn_80068574.hpp"
#include "fn_80114F1C.hpp"



void fn_8011F8F4(PPC::Runtime::GCContext* context)
{
/*8011F8F4 0011C6F4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x90, context->r1));
/*8011F8F8 0011C6F8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8011F8FC 0011C6FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*8011F900 0011C700*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*8011F904 0011C704*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1)0, context->qr0);
/*8011F908 0011C708*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x80);
/*8011F90C 0011C70C*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*8011F910 0011C710*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8011F914 0011C714*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*8011F918 0011C718*/ PPC::Runtime::ASM::bl(fn_80112044);
/*8011F91C 0011C71C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*8011F920 0011C720*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r28));
/*8011F924 0011C724*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/* 8011F928 0011C728  54 00 FF FF */ extrwi. context->r0 , context->r0 , 1 , 30
/*8011F92C 0011C72C*/ PPC::Runtime::ASM::beq(.L_8011FD00);
/*8011F930 0011C730*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8011F934 0011C734*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8011F938 0011C738*/ PPC::Runtime::ASM::bne(.L_8011F948);
/*8011F93C 0011C73C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*8011F940 0011C740*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8011F944 0011C744*/ PPC::Runtime::ASM::bne(.L_8011FD00);
RUNTIME_PPC_JUMP_LABEL(.L_8011F948, 0x8011F948) //this is a jump label
/*8011F948 0011C748*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8011F94C 0011C74C*/ PPC::Runtime::ASM::bne(.L_8011F95C);
/*8011F950 0011C750*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8011F954 0011C754*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8011F958 0011C758*/ PPC::Runtime::ASM::b(.L_8011F96C);
RUNTIME_PPC_JUMP_LABEL(.L_8011F95C, 0x8011F95C) //this is a jump label
/*8011F95C 0011C75C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8011F960 0011C760*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8011F964 0011C764*/ PPC::Runtime::ASM::bne(.L_8011FC2C);
/*8011F968 0011C768*/ PPC::Runtime::ASM::b(.L_8011FD00);
RUNTIME_PPC_JUMP_LABEL(.L_8011F96C, 0x8011F96C) //this is a jump label
/*8011F96C 0011C76C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*8011F970 0011C770*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x40);
/*8011F974 0011C774*/ PPC::Runtime::ASM::bl(fn_8022C568);
/*8011F978 0011C778*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8011F97C 0011C77C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8011F980 0011C780*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x1);
/*8011F984 0011C784*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 2, 28);
/*8011F988 0011C788*/ PPC::Runtime::ASM::bne(.L_8011F9B8);
/*8011F98C 0011C78C*/ PPC::Runtime::ASM::bl(fn_800B8054);
/*8011F990 0011C790*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8011F994 0011C794*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8011F998 0011C798*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x28);
/*8011F99C 0011C79C*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 4, 24);
/*8011F9A0 0011C7A0*/ PPC::Runtime::ASM::bl(fn_8022C568);
/*8011F9A4 0011C7A4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x40);
/*8011F9A8 0011C7A8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x28);
/*8011F9AC 0011C7AC*/ PPC::Runtime::ASM::bl(fn_803D22CC);
/*8011F9B0 0011C7B0*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*8011F9B4 0011C7B4*/ PPC::Runtime::ASM::b(.L_8011FA10);
RUNTIME_PPC_JUMP_LABEL(.L_8011F9B8, 0x8011F9B8) //this is a jump label
/*8011F9B8 0011C7B8*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x3);
/*8011F9BC 0011C7BC*/ PPC::Runtime::ASM::bne(.L_8011FA00);
/*8011F9C0 0011C7C0*/ PPC::Runtime::ASM::li(context->r27, 0x5);
RUNTIME_PPC_JUMP_LABEL(.L_8011F9C4, 0x8011F9C4) //this is a jump label
/*8011F9C4 0011C7C4*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8011F9C8 0011C7C8*/ PPC::Runtime::ASM::bl(fn_800BA6C0);
/*8011F9CC 0011C7CC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8011F9D0 0011C7D0*/ PPC::Runtime::ASM::bne(.L_8011F9E0);
/*8011F9D4 0011C7D4*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
/*8011F9D8 0011C7D8*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x20);
/*8011F9DC 0011C7DC*/ PPC::Runtime::ASM::blt(.L_8011F9C4);
RUNTIME_PPC_JUMP_LABEL(.L_8011F9E0, 0x8011F9E0) //this is a jump label
/*8011F9E0 0011C7E0*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8011F9E4 0011C7E4*/ PPC::Runtime::ASM::bl(fn_800B8054);
/*8011F9E8 0011C7E8*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*8011F9EC 0011C7EC*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8011F9F0 0011C7F0*/ PPC::Runtime::ASM::mr(context->r27, context->r0);
/*8011F9F4 0011C7F4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x28);
/*8011F9F8 0011C7F8*/ PPC::Runtime::ASM::bl(fn_800B89A0);
/*8011F9FC 0011C7FC*/ PPC::Runtime::ASM::b(.L_8011FA10);
RUNTIME_PPC_JUMP_LABEL(.L_8011FA00, 0x8011FA00) //this is a jump label
/*8011FA00 0011C800*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x4);
/*8011FA04 0011C804*/ PPC::Runtime::ASM::bne(.L_8011FA10);
/*8011FA08 0011C808*/ PPC::Runtime::ASM::bl(fn_800B8054);
/*8011FA0C 0011C80C*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8011FA10, 0x8011FA10) //this is a jump label
/*8011FA10 0011C810*/ PPC::Runtime::ASM::bl(fn_8000AC60);
/*8011FA14 0011C814*/ PPC::Runtime::ASM::mullw(context->r3, context->r3, context->r3);
/*8011FA18 0011C818*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*8011FA1C 0011C81C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8011FA20 0011C820*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805DFD88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8011FA24 0011C824*/ PPC::Runtime::ASM::xoris(context->r0, context->r3, 0x8000);
/*8011FA28 0011C828*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8011FA2C 0011C82C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8011FA30 0011C830*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*8011FA34 0011C834*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*8011FA38 0011C838*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*8011FA3C 0011C83C*/ PPC::Runtime::ASM::beq(.L_8011FD00);
/*8011FA40 0011C840*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*8011FA44 0011C844*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x1c);
/*8011FA48 0011C848*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x10);
/*8011FA4C 0011C84C*/ PPC::Runtime::ASM::bl(fn_8022C5C0);
/*8011FA50 0011C850*/ PPC::Runtime::ASM::lfs(context->f5, STRUCT_FLOAT_COUNT_1805DFD98 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8011FA54 0011C854*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8011FA58 0011C858*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8011FA5C 0011C85C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x40);
/*8011FA60 0011C860*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8011FA64 0011C864*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x34);
/*8011FA68 0011C868*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8011FA6C 0011C86C*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*8011FA70 0011C870*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8011FA74 0011C874*/ PPC::Runtime::ASM::fmadds(context->f4, context->f5, context->f1, context->f0);
/*8011FA78 0011C878*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8011FA7C 0011C87C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8011FA80 0011C880*/ PPC::Runtime::ASM::fmadds(context->f2, context->f5, context->f3, context->f2);
/*8011FA84 0011C884*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8011FA88 0011C888*/ PPC::Runtime::ASM::fmadds(context->f0, context->f5, context->f1, context->f0);
/*8011FA8C 0011C88C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8011FA90 0011C890*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8011FA94 0011C894*/ PPC::Runtime::ASM::bl(fn_80067438);
/*8011FA98 0011C898*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8011FA9C 0011C89C*/ PPC::Runtime::ASM::beq(.L_8011FD00);
/*8011FAA0 0011C8A0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8011FAA4 0011C8A4*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8011FAA8 0011C8A8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFD9C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8011FAAC 0011C8AC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8011FAB0 0011C8B0*/ PPC::Runtime::ASM::fmuls(context->f31, context->f2, context->f1);
/*8011FAB4 0011C8B4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8011FAB8 0011C8B8*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8011FABC 0011C8BC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8011FAC0 0011C8C0*/ PPC::Runtime::ASM::bne(.L_8011FAD4);
/*8011FAC4 0011C8C4*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6448 @ Get_MemoryOffset_SDA21);
/*8011FAC8 0011C8C8*/ PPC::Runtime::ASM::li(context->r4, 0x3b8);
/*8011FACC 0011C8CC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6450 @ Get_MemoryOffset_SDA21);
/*8011FAD0 0011C8D0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8011FAD4, 0x8011FAD4) //this is a jump label
/*8011FAD4 0011C8D4*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*8011FAD8 0011C8D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8011FADC 0011C8DC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8011FAE0 0011C8E0*/ PPC::Runtime::ASM::bne(.L_8011FB2C);
/*8011FAE4 0011C8E4*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8011FAE8 0011C8E8*/ PPC::Runtime::ASM::beq(.L_8011FB2C);
/*8011FAEC 0011C8EC*/ PPC::Runtime::ASM::bne(.L_8011FB00);
/*8011FAF0 0011C8F0*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6448 @ Get_MemoryOffset_SDA21);
/*8011FAF4 0011C8F4*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8011FAF8 0011C8F8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6450 @ Get_MemoryOffset_SDA21);
/*8011FAFC 0011C8FC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8011FB00, 0x8011FB00) //this is a jump label
/*8011FB00 0011C900*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8011FB04 0011C904*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8011FB08 0011C908*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8011FB0C 0011C90C*/ PPC::Runtime::ASM::bne(.L_8011FB1C);
/*8011FB10 0011C910*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8011FB14 0011C914*/ PPC::Runtime::ASM::beq(.L_8011FB1C);
/*8011FB18 0011C918*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8011FB1C, 0x8011FB1C) //this is a jump label
/*8011FB1C 0011C91C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8011FB20 0011C920*/ PPC::Runtime::ASM::bne(.L_8011FB2C);
/*8011FB24 0011C924*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011FB28 0011C928*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8011FB2C, 0x8011FB2C) //this is a jump label
/*8011FB2C 0011C92C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8011FB30 0011C930*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8011FB34 0011C934*/ PPC::Runtime::ASM::fneg(context->f31, context->f0);
/*8011FB38 0011C938*/ PPC::Runtime::ASM::bne(.L_8011FB4C);
/*8011FB3C 0011C93C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6448 @ Get_MemoryOffset_SDA21);
/*8011FB40 0011C940*/ PPC::Runtime::ASM::li(context->r4, 0x3c6);
/*8011FB44 0011C944*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6450 @ Get_MemoryOffset_SDA21);
/*8011FB48 0011C948*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8011FB4C, 0x8011FB4C) //this is a jump label
/*8011FB4C 0011C94C*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*8011FB50 0011C950*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8011FB54 0011C954*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8011FB58 0011C958*/ PPC::Runtime::ASM::bne(.L_8011FBA4);
/*8011FB5C 0011C95C*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8011FB60 0011C960*/ PPC::Runtime::ASM::beq(.L_8011FBA4);
/*8011FB64 0011C964*/ PPC::Runtime::ASM::bne(.L_8011FB78);
/*8011FB68 0011C968*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6448 @ Get_MemoryOffset_SDA21);
/*8011FB6C 0011C96C*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8011FB70 0011C970*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6450 @ Get_MemoryOffset_SDA21);
/*8011FB74 0011C974*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8011FB78, 0x8011FB78) //this is a jump label
/*8011FB78 0011C978*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8011FB7C 0011C97C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8011FB80 0011C980*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8011FB84 0011C984*/ PPC::Runtime::ASM::bne(.L_8011FB94);
/*8011FB88 0011C988*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8011FB8C 0011C98C*/ PPC::Runtime::ASM::beq(.L_8011FB94);
/*8011FB90 0011C990*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8011FB94, 0x8011FB94) //this is a jump label
/*8011FB94 0011C994*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8011FB98 0011C998*/ PPC::Runtime::ASM::bne(.L_8011FBA4);
/*8011FB9C 0011C99C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011FBA0 0011C9A0*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8011FBA4, 0x8011FBA4) //this is a jump label
/*8011FBA4 0011C9A4*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8011FBA8 0011C9A8*/ PPC::Runtime::ASM::bne(.L_8011FBBC);
/*8011FBAC 0011C9AC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6448 @ Get_MemoryOffset_SDA21);
/*8011FBB0 0011C9B0*/ PPC::Runtime::ASM::li(context->r4, 0x3d4);
/*8011FBB4 0011C9B4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6450 @ Get_MemoryOffset_SDA21);
/*8011FBB8 0011C9B8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8011FBBC, 0x8011FBBC) //this is a jump label
/*8011FBBC 0011C9BC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DFDA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8011FBC0 0011C9C0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r30));
/*8011FBC4 0011C9C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8011FBC8 0011C9C8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8011FBCC 0011C9CC*/ PPC::Runtime::ASM::bne(.L_8011FC18);
/*8011FBD0 0011C9D0*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8011FBD4 0011C9D4*/ PPC::Runtime::ASM::beq(.L_8011FC18);
/*8011FBD8 0011C9D8*/ PPC::Runtime::ASM::bne(.L_8011FBEC);
/*8011FBDC 0011C9DC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6448 @ Get_MemoryOffset_SDA21);
/*8011FBE0 0011C9E0*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8011FBE4 0011C9E4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6450 @ Get_MemoryOffset_SDA21);
/*8011FBE8 0011C9E8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8011FBEC, 0x8011FBEC) //this is a jump label
/*8011FBEC 0011C9EC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8011FBF0 0011C9F0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8011FBF4 0011C9F4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8011FBF8 0011C9F8*/ PPC::Runtime::ASM::bne(.L_8011FC08);
/*8011FBFC 0011C9FC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8011FC00 0011CA00*/ PPC::Runtime::ASM::beq(.L_8011FC08);
/*8011FC04 0011CA04*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8011FC08, 0x8011FC08) //this is a jump label
/*8011FC08 0011CA08*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8011FC0C 0011CA0C*/ PPC::Runtime::ASM::bne(.L_8011FC18);
/*8011FC10 0011CA10*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011FC14 0011CA14*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8011FC18, 0x8011FC18) //this is a jump label
/*8011FC18 0011CA18*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8011FC1C 0011CA1C*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*8011FC20 0011CA20*/ PPC::Runtime::ASM::bl(fn_801152CC);
/*8011FC24 0011CA24*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8011FC28 0011CA28*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8011FC2C, 0x8011FC2C) //this is a jump label
/*8011FC2C 0011CA2C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8011FC30 0011CA30*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*8011FC34 0011CA34*/ PPC::Runtime::ASM::bne(.L_8011FCF4);
/*8011FC38 0011CA38*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*8011FC3C 0011CA3C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/* 8011FC40 0011CA40  54 00 FF FF */ extrwi. context->r0 , context->r0 , 1 , 30
/*8011FC44 0011CA44*/ PPC::Runtime::ASM::beq(.L_8011FD00);
/*8011FC48 0011CA48*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*8011FC4C 0011CA4C*/ PPC::Runtime::ASM::bl(fn_80068574);
/*8011FC50 0011CA50*/ PPC::Runtime::ASM::lhz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8011FC54 0011CA54*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*8011FC58 0011CA58*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r1));
/*8011FC5C 0011CA5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8011FC60 0011CA60*/ PPC::Runtime::ASM::subf(context->r0, context->r30, context->r3);
/*8011FC64 0011CA64*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805DFD88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8011FC68 0011CA68*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*8011FC6C 0011CA6C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DFD80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8011FC70 0011CA70*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8011FC74 0011CA74*/ PPC::Runtime::ASM::lhz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8011FC78 0011CA78*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8011FC7C 0011CA7C*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*8011FC80 0011CA80*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f0);
/*8011FC84 0011CA84*/ PPC::Runtime::ASM::bl(fn___cvt_fp2unsigned);
/*8011FC88 0011CA88*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*8011FC8C 0011CA8C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*8011FC90 0011CA90*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805DFD90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8011FC94 0011CA94*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8011FC98 0011CA98*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*8011FC9C 0011CA9C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DFD80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8011FCA0 0011CAA0*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*8011FCA4 0011CAA4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*8011FCA8 0011CAA8*/ PPC::Runtime::ASM::fadds(context->f1, context->f2, context->f0);
/*8011FCAC 0011CAAC*/ PPC::Runtime::ASM::bl(fn___cvt_fp2unsigned);
/*8011FCB0 0011CAB0*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r1));
/*8011FCB4 0011CAB4*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8011FCB8 0011CAB8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8011FCBC 0011CABC*/ PPC::Runtime::ASM::mr(context->r6, context->r30);
/*8011FCC0 0011CAC0*/ PPC::Runtime::ASM::subf(context->r5, context->r3, context->r0);
/*8011FCC4 0011CAC4*/ PPC::Runtime::ASM::bl(fn_GXSetScissor);
/*8011FCC8 0011CAC8*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8011FCCC 0011CACC*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*8011FCD0 0011CAD0*/ PPC::Runtime::ASM::bl(fn_GXLink_Common);
/*8011FCD4 0011CAD4*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8011FCD8 0011CAD8*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r1));
/*8011FCDC 0011CADC*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8011FCE0 0011CAE0*/ PPC::Runtime::ASM::lhz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r1));
/*8011FCE4 0011CAE4*/ PPC::Runtime::ASM::subf(context->r6, context->r4, context->r0);
/*8011FCE8 0011CAE8*/ PPC::Runtime::ASM::subf(context->r5, context->r3, context->r5);
/*8011FCEC 0011CAEC*/ PPC::Runtime::ASM::bl(fn_GXSetScissor);
/*8011FCF0 0011CAF0*/ PPC::Runtime::ASM::b(.L_8011FD00);
RUNTIME_PPC_JUMP_LABEL(.L_8011FCF4, 0x8011FCF4) //this is a jump label
/*8011FCF4 0011CAF4*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8011FCF8 0011CAF8*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*8011FCFC 0011CAFC*/ PPC::Runtime::ASM::bl(fn_80114F1C);
RUNTIME_PPC_JUMP_LABEL(.L_8011FD00, 0x8011FD00) //this is a jump label
/*8011FD00 0011CB00*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1)0, context->qr0);
/*8011FD04 0011CB04*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x80);
/*8011FD08 0011CB08*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*8011FD0C 0011CB0C*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*8011FD10 0011CB10*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*8011FD14 0011CB14*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8011FD18 0011CB18*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x90);
/*8011FD1C 0011CB1C*/ PPC::Runtime::ASM::blr();
}
//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80009FB8.hpp"
#include "fn_800092D8.hpp"
#include "fn_stGetStageKind_groundId.hpp"
#include "fn_8022C910.hpp"
#include "fn_8004A130.hpp"
#include "fn_8004A054.hpp"



void fn_FuncWithAJumpTable_20(PPC::Runtime::GCContext* context)
{
/*8004D8A8 0004A6A8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8004D8AC 0004A6AC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8004D8B0 0004A6B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8004D8B4 0004A6B4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8004D8B8 0004A6B8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8004D8BC 0004A6BC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8004D8C0 0004A6C0*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8004D8C4 0004A6C4*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8004D8C8 0004A6C8*/ PPC::Runtime::ASM::bl(fn_80009FB8);
/*8004D8CC 0004A6CC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8004D8D0 0004A6D0*/ PPC::Runtime::ASM::bl(fn_800092D8);
/*8004D8D4 0004A6D4*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*8004D8D8 0004A6D8*/ PPC::Runtime::ASM::bl(fn_stGetStageKind_groundId);
/*8004D8DC 0004A6DC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8004D8E0 0004A6E0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8004D8E4 0004A6E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8004D8E8 0004A6E8*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8004D8EC 0004A6EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8004D8F0 0004A6F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004D8F4 0004A6F4*/ PPC::Runtime::ASM::bl(fn_8022C910);
/*8004D8F8 0004A6F8*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x8);
/*8004D8FC 0004A6FC*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8004D900 0004A700*/ PPC::Runtime::ASM::bgt(.L_8004DAEC);
/*8004D904 0004A704*/ PPC::Runtime::ASM::lis(context->r4, FuncWithAJumpTable_20_JumpTable_80497714 @ Get_MemoryOffset_HighBit);
/*8004D908 0004A708*/ PPC::Runtime::ASM::slwi(context->r3, context->r30, 2);
/*8004D90C 0004A70C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, FuncWithAJumpTable_20_JumpTable_80497714 @ Get_MemoryOffset_LowBit);
/*8004D910 0004A710*/ PPC::Runtime::ASM::lwzx(context->r3, context->r4, context->r3);
/*8004D914 0004A714*/ PPC::Runtime::ASM::mtctr(context->r3);
/*8004D918 0004A718*/ PPC::Runtime::ASM::bctr();
/*8004D91C 0004A71C*/ PPC::Runtime::ASM::li(context->r7, 0x3b);
/*8004D920 0004A720*/ PPC::Runtime::ASM::li(context->r6, 0x3c);
/*8004D924 0004A724*/ PPC::Runtime::ASM::li(context->r5, 0x3d);
/*8004D928 0004A728*/ PPC::Runtime::ASM::li(context->r4, 0x5a0);
/*8004D92C 0004A72C*/ PPC::Runtime::ASM::li(context->r3, 0x4ec);
/*8004D930 0004A730*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x9);
/*8004D934 0004A734*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8004D938 0004A738*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8004D93C 0004A73C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8004D940 0004A740*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004D944 0004A744*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8004D948 0004A748*/ PPC::Runtime::ASM::bne(.L_8004DAEC);
/*8004D94C 0004A74C*/ PPC::Runtime::ASM::li(context->r0, 0x564);
/*8004D950 0004A750*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8004D954 0004A754*/ PPC::Runtime::ASM::b(.L_8004DAEC);
/*8004D958 0004A758*/ PPC::Runtime::ASM::li(context->r7, 0x3e);
/*8004D95C 0004A75C*/ PPC::Runtime::ASM::li(context->r6, 0x3f);
/*8004D960 0004A760*/ PPC::Runtime::ASM::li(context->r5, 0x40);
/*8004D964 0004A764*/ PPC::Runtime::ASM::li(context->r4, 0x1068);
/*8004D968 0004A768*/ PPC::Runtime::ASM::li(context->r3, 0xd5c);
/*8004D96C 0004A76C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x6);
/*8004D970 0004A770*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8004D974 0004A774*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8004D978 0004A778*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8004D97C 0004A77C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004D980 0004A780*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8004D984 0004A784*/ PPC::Runtime::ASM::bne(.L_8004DAEC);
/*8004D988 0004A788*/ PPC::Runtime::ASM::li(context->r0, 0xe88);
/*8004D98C 0004A78C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8004D990 0004A790*/ PPC::Runtime::ASM::b(.L_8004DAEC);
/*8004D994 0004A794*/ PPC::Runtime::ASM::li(context->r7, 0x41);
/*8004D998 0004A798*/ PPC::Runtime::ASM::li(context->r6, 0x42);
/*8004D99C 0004A79C*/ PPC::Runtime::ASM::li(context->r5, 0x43);
/*8004D9A0 0004A7A0*/ PPC::Runtime::ASM::li(context->r4, 0xf3c);
/*8004D9A4 0004A7A4*/ PPC::Runtime::ASM::li(context->r3, 0xc6c);
/*8004D9A8 0004A7A8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x5);
/*8004D9AC 0004A7AC*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8004D9B0 0004A7B0*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8004D9B4 0004A7B4*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8004D9B8 0004A7B8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004D9BC 0004A7BC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8004D9C0 0004A7C0*/ PPC::Runtime::ASM::bne(.L_8004DAEC);
/*8004D9C4 0004A7C4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8004D9C8 0004A7C8*/ PPC::Runtime::ASM::b(.L_8004DAEC);
/*8004D9CC 0004A7CC*/ PPC::Runtime::ASM::li(context->r7, 0x44);
/*8004D9D0 0004A7D0*/ PPC::Runtime::ASM::li(context->r6, 0x45);
/*8004D9D4 0004A7D4*/ PPC::Runtime::ASM::li(context->r5, 0x46);
/*8004D9D8 0004A7D8*/ PPC::Runtime::ASM::li(context->r4, 0x1068);
/*8004D9DC 0004A7DC*/ PPC::Runtime::ASM::li(context->r3, 0xd98);
/*8004D9E0 0004A7E0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x7);
/*8004D9E4 0004A7E4*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8004D9E8 0004A7E8*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8004D9EC 0004A7EC*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8004D9F0 0004A7F0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004D9F4 0004A7F4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8004D9F8 0004A7F8*/ PPC::Runtime::ASM::bne(.L_8004DAEC);
/*8004D9FC 0004A7FC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8004DA00 0004A800*/ PPC::Runtime::ASM::b(.L_8004DAEC);
/*8004DA04 0004A804*/ PPC::Runtime::ASM::li(context->r7, 0x47);
/*8004DA08 0004A808*/ PPC::Runtime::ASM::li(context->r6, 0x48);
/*8004DA0C 0004A80C*/ PPC::Runtime::ASM::li(context->r5, 0x49);
/*8004DA10 0004A810*/ PPC::Runtime::ASM::li(context->r4, 0x1068);
/*8004DA14 0004A814*/ PPC::Runtime::ASM::li(context->r3, 0xe4c);
/*8004DA18 0004A818*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xc);
/*8004DA1C 0004A81C*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8004DA20 0004A820*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8004DA24 0004A824*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8004DA28 0004A828*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004DA2C 0004A82C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8004DA30 0004A830*/ PPC::Runtime::ASM::bne(.L_8004DAEC);
/*8004DA34 0004A834*/ PPC::Runtime::ASM::li(context->r0, 0xe88);
/*8004DA38 0004A838*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8004DA3C 0004A83C*/ PPC::Runtime::ASM::b(.L_8004DAEC);
/*8004DA40 0004A840*/ PPC::Runtime::ASM::li(context->r7, 0x4a);
/*8004DA44 0004A844*/ PPC::Runtime::ASM::li(context->r6, 0x4b);
/*8004DA48 0004A848*/ PPC::Runtime::ASM::li(context->r5, 0x4c);
/*8004DA4C 0004A84C*/ PPC::Runtime::ASM::li(context->r4, 0xfb4);
/*8004DA50 0004A850*/ PPC::Runtime::ASM::li(context->r3, 0xd98);
/*8004DA54 0004A854*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8004DA58 0004A858*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8004DA5C 0004A85C*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8004DA60 0004A860*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8004DA64 0004A864*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004DA68 0004A868*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8004DA6C 0004A86C*/ PPC::Runtime::ASM::bne(.L_8004DAEC);
/*8004DA70 0004A870*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8004DA74 0004A874*/ PPC::Runtime::ASM::b(.L_8004DAEC);
/*8004DA78 0004A878*/ PPC::Runtime::ASM::li(context->r7, 0x4d);
/*8004DA7C 0004A87C*/ PPC::Runtime::ASM::li(context->r6, 0x4e);
/*8004DA80 0004A880*/ PPC::Runtime::ASM::li(context->r5, 0x4f);
/*8004DA84 0004A884*/ PPC::Runtime::ASM::li(context->r4, 0xf3c);
/*8004DA88 0004A888*/ PPC::Runtime::ASM::li(context->r3, 0xd20);
/*8004DA8C 0004A88C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xb);
/*8004DA90 0004A890*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8004DA94 0004A894*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8004DA98 0004A898*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8004DA9C 0004A89C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004DAA0 0004A8A0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8004DAA4 0004A8A4*/ PPC::Runtime::ASM::bne(.L_8004DAEC);
/*8004DAA8 0004A8A8*/ PPC::Runtime::ASM::li(context->r0, 0xd5c);
/*8004DAAC 0004A8AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8004DAB0 0004A8B0*/ PPC::Runtime::ASM::b(.L_8004DAEC);
/*8004DAB4 0004A8B4*/ PPC::Runtime::ASM::li(context->r7, 0x50);
/*8004DAB8 0004A8B8*/ PPC::Runtime::ASM::li(context->r6, 0x51);
/*8004DABC 0004A8BC*/ PPC::Runtime::ASM::li(context->r5, 0x52);
/*8004DAC0 0004A8C0*/ PPC::Runtime::ASM::li(context->r4, 0x1644);
/*8004DAC4 0004A8C4*/ PPC::Runtime::ASM::li(context->r3, 0x12c0);
/*8004DAC8 0004A8C8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xa);
/*8004DACC 0004A8CC*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8004DAD0 0004A8D0*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8004DAD4 0004A8D4*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8004DAD8 0004A8D8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004DADC 0004A8DC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8004DAE0 0004A8E0*/ PPC::Runtime::ASM::bne(.L_8004DAEC);
/*8004DAE4 0004A8E4*/ PPC::Runtime::ASM::li(context->r0, 0x13ec);
/*8004DAE8 0004A8E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8004DAEC, 0x8004DAEC) //this is a jump label
/*8004DAEC 0004A8EC*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*8004DAF0 0004A8F0*/ PPC::Runtime::ASM::beq(.L_8004DB54);
/*8004DAF4 0004A8F4*/ PPC::Runtime::ASM::addi(context->r30, context->r1, 0x14);
/*8004DAF8 0004A8F8*/ PPC::Runtime::ASM::addi(context->r29, context->r1, 0x8);
/*8004DAFC 0004A8FC*/ PPC::Runtime::ASM::li(context->r28, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004DB00, 0x8004DB00) //this is a jump label
/*8004DB00 0004A900*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8004DB04 0004A904*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8004DB08 0004A908*/ PPC::Runtime::ASM::beq(.L_8004DB40);
/*8004DB0C 0004A90C*/ PPC::Runtime::ASM::cmpw(context->r31, context->r0);
/*8004DB10 0004A910*/ PPC::Runtime::ASM::bgt(.L_8004DB40);
/*8004DB14 0004A914*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8004DB18 0004A918*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8004DB1C 0004A91C*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r0, 24);
/*8004DB20 0004A920*/ PPC::Runtime::ASM::bl(fn_8004A130);
/*8004DB24 0004A924*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r3, 24);
/*8004DB28 0004A928*/ PPC::Runtime::ASM::andi.(context->r0, context->r0, 0x5);
/*8004DB2C 0004A92C*/ PPC::Runtime::ASM::bne(.L_8004DB40);
/*8004DB30 0004A930*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8004DB34 0004A934*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8004DB38 0004A938*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r0, 24);
/*8004DB3C 0004A93C*/ PPC::Runtime::ASM::bl(fn_8004A054);
RUNTIME_PPC_JUMP_LABEL(.L_8004DB40, 0x8004DB40) //this is a jump label
/*8004DB40 0004A940*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*8004DB44 0004A944*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x4);
/*8004DB48 0004A948*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x3);
/*8004DB4C 0004A94C*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4);
/*8004DB50 0004A950*/ PPC::Runtime::ASM::blt(.L_8004DB00);
RUNTIME_PPC_JUMP_LABEL(.L_8004DB54, 0x8004DB54) //this is a jump label
/*8004DB54 0004A954*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8004DB58 0004A958*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8004DB5C 0004A95C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8004DB60 0004A960*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8004DB64 0004A964*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8004DB68 0004A968*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8004DB6C 0004A96C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8004DB70 0004A970*/ PPC::Runtime::ASM::blr();
}
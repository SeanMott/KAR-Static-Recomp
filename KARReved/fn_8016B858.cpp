//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_8016E578.hpp"
#include "fn_8016E40C.hpp"
#include "fn_8016D7DC.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_8016E77C.hpp"
#include "fn_8016DD40.hpp"
#include "fn_80142260.hpp"
#include "fn_801426C0.hpp"
#include "fn_80142C84.hpp"
#include "fn_8016E0EC.hpp"



void fn_8016B858(PPC::Runtime::GCContext* context)
{
/*8016B858 00168658*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8016B85C 0016865C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8016B860 00168660*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8016B864 00168664*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8016B868 00168668*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*8016B86C 0016866C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8016B870 00168670*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8016B874 00168674*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb18, context->r3));
/*8016B878 00168678*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*8016B87C 0016867C*/ PPC::Runtime::ASM::beq(.L_8016BA04);
/*8016B880 00168680*/ PPC::Runtime::ASM::extsb(context->r0, context->r30);
/*8016B884 00168684*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*8016B888 00168688*/ PPC::Runtime::ASM::mulli(context->r27, context->r0, 0x50);
/*8016B88C 0016868C*/ PPC::Runtime::ASM::add(context->r29, context->r31, context->r27);
/*8016B890 00168690*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x57, context->r29));
/*8016B894 00168694*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8016B898 00168698*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8016B89C 0016869C*/ PPC::Runtime::ASM::beq(.L_8016B8BC);
/*8016B8A0 001686A0*/ PPC::Runtime::ASM::bge(.L_8016B8B0);
/*8016B8A4 001686A4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8016B8A8 001686A8*/ PPC::Runtime::ASM::bge(.L_8016B8E8);
/*8016B8AC 001686AC*/ PPC::Runtime::ASM::b(.L_8016BA04);
RUNTIME_PPC_JUMP_LABEL(.L_8016B8B0, 0x8016B8B0) //this is a jump label
/*8016B8B0 001686B0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*8016B8B4 001686B4*/ PPC::Runtime::ASM::bge(.L_8016BA04);
/*8016B8B8 001686B8*/ PPC::Runtime::ASM::b(.L_8016B9FC);
RUNTIME_PPC_JUMP_LABEL(.L_8016B8BC, 0x8016B8BC) //this is a jump label
/*8016B8BC 001686BC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x55, context->r29));
/*8016B8C0 001686C0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8016B8C4 001686C4*/ PPC::Runtime::ASM::bne(.L_8016B8DC);
/*8016B8C8 001686C8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8016B8CC 001686CC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8016B8D0 001686D0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x56, context->r29));
/*8016B8D4 001686D4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x55, context->r29));
/*8016B8D8 001686D8*/ PPC::Runtime::ASM::bl(fn_8016E578);
RUNTIME_PPC_JUMP_LABEL(.L_8016B8DC, 0x8016B8DC) //this is a jump label
/*8016B8DC 001686DC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8016B8E0 001686E0*/ PPC::Runtime::ASM::bl(fn_8016E40C);
/*8016B8E4 001686E4*/ PPC::Runtime::ASM::b(.L_8016BA04);
RUNTIME_PPC_JUMP_LABEL(.L_8016B8E8, 0x8016B8E8) //this is a jump label
/*8016B8E8 001686E8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8016B8EC 001686EC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0B28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8016B8F0 001686F0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x56, context->r29));
/*8016B8F4 001686F4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x55, context->r29));
/*8016B8F8 001686F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*8016B8FC 001686FC*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnimAll);
/*8016B900 00168700*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*8016B904 00168704*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0B20 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8016B908 00168708*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*8016B90C 0016870C*/ PPC::Runtime::ASM::bl(fn_HSD_AObjSetRate);
/*8016B910 00168710*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*8016B914 00168714*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnim?);
/*8016B918 00168718*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8016B91C 0016871C*/ PPC::Runtime::ASM::bl(fn_8016D7DC);
/*8016B920 00168720*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*8016B924 00168724*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_8016B928, 0x8016B928) //this is a jump label
/*8016B928 00168728*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r28));
/*8016B92C 0016872C*/ PPC::Runtime::ASM::addi(context->r5, context->r28, 0x30);
/*8016B930 00168730*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8016B934 00168734*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*8016B938 00168738*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r28));
/*8016B93C 0016873C*/ PPC::Runtime::ASM::addi(context->r5, context->r28, 0x3c);
/*8016B940 00168740*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8016B944 00168744*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*8016B948 00168748*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r28));
/*8016B94C 0016874C*/ PPC::Runtime::ASM::addi(context->r5, context->r28, 0x24);
/*8016B950 00168750*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8016B954 00168754*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*8016B958 00168758*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8016B95C 0016875C*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x50);
/*8016B960 00168760*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x2);
/*8016B964 00168764*/ PPC::Runtime::ASM::blt(.L_8016B928);
/*8016B968 00168768*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8016B96C 0016876C*/ PPC::Runtime::ASM::bl(fn_8016E77C);
/*8016B970 00168770*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8016B974 00168774*/ PPC::Runtime::ASM::bl(fn_8016DD40);
/*8016B978 00168778*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r31));
/*8016B97C 0016877C*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8016B980 00168780*/ PPC::Runtime::ASM::bne(.L_8016B9AC);
/*8016B984 00168784*/ PPC::Runtime::ASM::add(context->r8, context->r31, context->r27);
/*8016B988 00168788*/ PPC::Runtime::ASM::addi(context->r4, context->r27, 0x24);
/*8016B98C 0016878C*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r8));
/*8016B990 00168790*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8016B994 00168794*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x49, context->r8));
/*8016B998 00168798*/ PPC::Runtime::ASM::add(context->r4, context->r31, context->r4);
/*8016B99C 0016879C*/ PPC::Runtime::ASM::lbz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4a, context->r8));
/*8016B9A0 001687A0*/ PPC::Runtime::ASM::lbz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r8));
/*8016B9A4 001687A4*/ PPC::Runtime::ASM::bl(fn_80142260);
/*8016B9A8 001687A8*/ PPC::Runtime::ASM::b(.L_8016B9C8);
RUNTIME_PPC_JUMP_LABEL(.L_8016B9AC, 0x8016B9AC) //this is a jump label
/*8016B9AC 001687AC*/ PPC::Runtime::ASM::add(context->r5, context->r31, context->r27);
/*8016B9B0 001687B0*/ PPC::Runtime::ASM::addi(context->r4, context->r27, 0x24);
/*8016B9B4 001687B4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r5));
/*8016B9B8 001687B8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8016B9BC 001687BC*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r5));
/*8016B9C0 001687C0*/ PPC::Runtime::ASM::add(context->r4, context->r31, context->r4);
/*8016B9C4 001687C4*/ PPC::Runtime::ASM::bl(fn_801426C0);
RUNTIME_PPC_JUMP_LABEL(.L_8016B9C8, 0x8016B9C8) //this is a jump label
/*8016B9C8 001687C8*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r27);
/*8016B9CC 001687CC*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r3));
/*8016B9D0 001687D0*/ PPC::Runtime::ASM::extsb.(context->r0, context->r5);
/*8016B9D4 001687D4*/ PPC::Runtime::ASM::ble(.L_8016BA04);
/*8016B9D8 001687D8*/ PPC::Runtime::ASM::addi(context->r4, context->r27, 0x24);
/*8016B9DC 001687DC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8016B9E0 001687E0*/ PPC::Runtime::ASM::add(context->r4, context->r31, context->r4);
/*8016B9E4 001687E4*/ PPC::Runtime::ASM::bl(fn_80142C84);
/*8016B9E8 001687E8*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r27);
/*8016B9EC 001687EC*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8016B9F0 001687F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*8016B9F4 001687F4*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetFlagsAll?);
/*8016B9F8 001687F8*/ PPC::Runtime::ASM::b(.L_8016BA04);
RUNTIME_PPC_JUMP_LABEL(.L_8016B9FC, 0x8016B9FC) //this is a jump label
/*8016B9FC 001687FC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8016BA00 00168800*/ PPC::Runtime::ASM::bl(fn_8016E0EC);
RUNTIME_PPC_JUMP_LABEL(.L_8016BA04, 0x8016BA04) //this is a jump label
/*8016BA04 00168804*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8016BA08 00168808*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*8016BA0C 0016880C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8016BA10 00168810*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8016BA14 00168814*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8016BA18 00168818*/ PPC::Runtime::ASM::blr();
}
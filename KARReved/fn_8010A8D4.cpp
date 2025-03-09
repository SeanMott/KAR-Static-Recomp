//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800F446C.hpp"
#include "fn_800D7954.hpp"
#include "fn_spawnSecretChamberItems.hpp"
#include "fn_killWhispy.hpp"
#include "fn_800F7870.hpp"
#include "fn_800EA084.hpp"



void fn_8010A8D4(PPC::Runtime::GCContext* context)
{
/*8010A8D4 001076D4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8010A8D8 001076D8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8010A8DC 001076DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8010A8E0 001076E0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8010A8E4 001076E4*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*8010A8E8 001076E8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8010A8EC 001076EC*/ PPC::Runtime::ASM::mr(context->r27, context->r5);
/*8010A8F0 001076F0*/ PPC::Runtime::ASM::mr(context->r28, context->r6);
/*8010A8F4 001076F4*/ PPC::Runtime::ASM::li(context->r3, 0x42);
/*8010A8F8 001076F8*/ PPC::Runtime::ASM::bl(fn_800F446C);
/*8010A8FC 001076FC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8010A900 00107700*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r31));
/*8010A904 00107704*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x54);
/*8010A908 00107708*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*8010A90C 0010770C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8010A910 00107710*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8010A914 00107714*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8010A918 00107718*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*8010A91C 0010771C*/ PPC::Runtime::ASM::lwzx(context->r0, context->r4, context->r0);
/*8010A920 00107720*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r31));
/*8010A924 00107724*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r31));
/*8010A928 00107728*/ PPC::Runtime::ASM::bl(fn_800D7954);
/*8010A92C 0010772C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r31));
/*8010A930 00107730*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010A934 00107734*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*8010A938 00107738*/ PPC::Runtime::ASM::mr(context->r5, context->r28);
/*8010A93C 0010773C*/ PPC::Runtime::ASM::bl(fn_spawnSecretChamberItems);
/*8010A940 00107740*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFAB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8010A944 00107744*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010A948 00107748*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*8010A94C 0010774C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8010A950 00107750*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8010A954 00107754*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8010A958 00107758*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DFABC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8010A95C 0010775C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8010A960 00107760*/ PPC::Runtime::ASM::bl(fn_killWhispy);
/*8010A964 00107764*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8010A968 00107768*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8010A96C 0010776C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8010A970 00107770*/ PPC::Runtime::ASM::bl(fn_800F7870);
/*8010A974 00107774*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x118);
/*8010A978 00107778*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8010A97C 0010777C*/ PPC::Runtime::ASM::bl(fn_800EA084);
/*8010A980 00107780*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8010A984 00107784*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*8010A988 00107788*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8010A98C 0010778C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8010A990 00107790*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8010A994 00107794*/ PPC::Runtime::ASM::blr();
}